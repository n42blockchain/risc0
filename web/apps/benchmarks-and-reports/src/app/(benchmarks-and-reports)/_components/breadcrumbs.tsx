"use client";

import {
  Breadcrumb,
  BreadcrumbItem,
  BreadcrumbLink,
  BreadcrumbList,
  BreadcrumbPage,
  BreadcrumbSeparator,
} from "@risc0/ui/breadcrumb";
import compact from "lodash-es/compact";
import { ChevronRightIcon } from "lucide-react";
import Link from "next/link";
import { usePathname } from "next/navigation";
import { Fragment } from "react";
import { joinWords } from "shared/utils/join-words";

// Routes you don't want to show up in the breadcrumb
const HIDDEN_BREADCRUMB_ROUTES = ["applications-benchmarks"];

export function Breadcrumbs() {
  const pathname = usePathname();
  const paths = compact(pathname.split("/"));

  if (pathname === "/") {
    // non-breaking space to keep alignment
    return <>&nbsp;</>;
  }

  return (
    <>
      {/* non-breaking space to keep alignment */}
      <div className="block md:hidden">&nbsp;</div>

      <Breadcrumb className="hidden md:block">
        <BreadcrumbList>
          <BreadcrumbItem>
            <BreadcrumbLink asChild>
              <Link href="/">Home</Link>
            </BreadcrumbLink>
          </BreadcrumbItem>
          <BreadcrumbSeparator>
            <ChevronRightIcon />
          </BreadcrumbSeparator>
          {paths
            .filter((path) => !HIDDEN_BREADCRUMB_ROUTES.includes(path))
            .map((path, index, { length }) => {
              const isLast = length - 1 === index;
              const sanitizedChunk = joinWords(path);

              return (
                <Fragment key={path}>
                  {isLast ? (
                    <BreadcrumbPage className="capitalize">{sanitizedChunk}</BreadcrumbPage>
                  ) : (
                    <BreadcrumbItem>
                      <BreadcrumbLink asChild>
                        <Link className="capitalize" href={`/${path}`}>
                          {sanitizedChunk}
                        </Link>
                      </BreadcrumbLink>
                    </BreadcrumbItem>
                  )}
                  {length - 1 !== index && (
                    <BreadcrumbSeparator>
                      <ChevronRightIcon />
                    </BreadcrumbSeparator>
                  )}
                </Fragment>
              );
            })}
        </BreadcrumbList>
      </Breadcrumb>
    </>
  );
}
