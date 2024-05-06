import Link from "next/link";
import { fetchDatasheet } from "../_actions/fetch-datasheet";
import { DatasheetTable } from "./datasheet-table";
import { datasheetTableColumns } from "./datasheet-table-columns";
import type { DatasheetTableSchema } from "./datasheet-table-schema";

const FILENAMES_TO_TITLES = {
  "macOS-apple_m2_pro.json": "Metal on Apple M2 Pro",
  "Linux-nvidia_rtx_3090_ti.json": "CUDA on NVIDIA RTX 3090 Ti",
  "macOS-cpu.json": "CPU only on Apple M2 Pro",
  "Linux-cpu.json": (
    <>
      CPU only on{" "}
      <Link target="_blank" href="https://instances.vantage.sh/aws/ec2/c6i.8xlarge" className="link">
        c6i.8xlarge
      </Link>
    </>
  ),
} as const;

export async function DatasheetContent({ version }: { version: string }) {
  const urls = Object.keys(FILENAMES_TO_TITLES);
  const dataPromises = urls.map((url) => fetchDatasheet({ version, url }));
  const data: DatasheetTableSchema[][] = await Promise.all(dataPromises);

  return data.map((dataArray, index) => (
    <DatasheetTable
      key={Object.keys(FILENAMES_TO_TITLES)[index]}
      data={dataArray}
      title={Object.values(FILENAMES_TO_TITLES)[index] ?? ""}
      columns={datasheetTableColumns}
    />
  ));
}
