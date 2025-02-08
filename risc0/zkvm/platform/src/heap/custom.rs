use crate::{memory::GUEST_MAX_MEM, syscall::sys_panic, WORD_SIZE};
use core::alloc::{GlobalAlloc, Layout};
use core::ptr::null_mut;

#[global_allocator]
pub static HEAP: FreeListAlloc = FreeListAlloc;

extern "C" {
    // This symbol marks the start of the heap (from the end of elf sections).
    static _end: u8;
}

/// A node in the free list, stored in the reserved metadata region.
struct FreeNode {
    size: usize,
    next: *mut FreeNode,
    block_addr: usize,
}

pub struct FreeListAlloc;

static mut HEAP_START: usize = 0;

// Pointer to end of heap, grows upwards.
static mut HEAP_POS: usize = 0;

// Pointer to the current position in the metadata area, which grows downwards.
static mut META_POS: usize = GUEST_MAX_MEM;

static mut FREE_LIST_HEAD: *mut FreeNode = null_mut();

unsafe impl GlobalAlloc for FreeListAlloc {
    unsafe fn alloc(&self, layout: Layout) -> *mut u8 {
        // Align the allocation at least to WORD_SIZE.
        let align = core::cmp::max(layout.align(), WORD_SIZE);
        let size = layout.size();

        // Check the free list first.
        if let Some(block) = free_list_find_fit(size, align) {
            return block;
        }

        // Otherwise, allocate from the bump pointer.
        alloc_aligned(size, align)
    }

    unsafe fn dealloc(&self, ptr: *mut u8, layout: Layout) {
        // Insert the freed block into the free list.
        free_list_insert(ptr as usize, layout.size());
    }
}

pub fn free() -> usize {
    // TODO this is very naive, ignores the space in free list
    unsafe { META_POS - HEAP_POS }
}

pub fn used() -> usize {
    // TODO naive, ignores freed memory
    unsafe { HEAP_POS - HEAP_START }
}

/// Try to allocate a block from the heap bump pointer.
unsafe fn alloc_aligned(bytes: usize, align: usize) -> *mut u8 {
    let mut pos = HEAP_POS;

    // Adjust for alignment.
    let misalign = pos & (align - 1);
    if misalign != 0 {
        pos += align - misalign;
    }

    let new_pos = pos.checked_add(bytes).expect("Overflow during allocation");
    if new_pos > GUEST_MAX_MEM {
        // Ran out of memory!
        const MSG: &[u8] = "Out of memory!".as_bytes();
        unsafe { sys_panic(MSG.as_ptr(), MSG.len()) };
    }
    HEAP_POS = new_pos;
    pos as *mut u8
}

/// Insert a freed block into the free list.
/// The FreeNode struct is allocated in the metadata region (growing downwards).
unsafe fn free_list_insert(addr: usize, size: usize) {
    let node_size = core::mem::size_of::<FreeNode>();
    META_POS = META_POS
        .checked_sub(node_size)
        .expect("Metadata region exhausted");
    let node_ptr = META_POS as *mut FreeNode;
    (*node_ptr).size = size;
    (*node_ptr).next = FREE_LIST_HEAD;
    (*node_ptr).block_addr = addr;
    FREE_LIST_HEAD = node_ptr;

    // Optionally, may want to merge adjacent free blocks.
}

/// Attempt to find a free block in the free list that fits.
unsafe fn free_list_find_fit(size: usize, align: usize) -> Option<*mut u8> {
    let mut prev: *mut FreeNode = null_mut();
    let mut current = FREE_LIST_HEAD;

    while !current.is_null() {
        let block_start = (*current).block_addr;
        let block_size = (*current).size;

        // TODO potentially check alignment?
        if block_size >= size {
            // Remove from free list.
            if prev.is_null() {
                FREE_LIST_HEAD = (*current).next;
            } else {
                (*prev).next = (*current).next;
            }
            return Some(block_start as *mut u8);
        }
        prev = current;
        current = (*current).next;
    }
    None
}

pub unsafe fn init() {
    HEAP_START = &_end as *const u8 as usize;
    HEAP_POS = HEAP_START;
    // META_POS is already set to GUEST_MAX_MEM.
}
