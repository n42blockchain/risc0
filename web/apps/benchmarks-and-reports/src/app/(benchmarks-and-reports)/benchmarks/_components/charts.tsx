"use client";

import { Button } from "@risc0/ui/button";
import { Separator } from "@risc0/ui/separator";
import { Skeleton } from "@risc0/ui/skeleton";
import { Tabs, TabsContent, TabsList, TabsTrigger } from "@risc0/ui/tabs";
import { DownloadIcon } from "lucide-react";
import Script from "next/script";
import { useEffect, useState } from "react";
import { type FormattedDataSetEntry, collectBenchesPerTestCase } from "../_utils/collect-benches-per-test-case";
import { renderBenchSet } from "../_utils/render-bench-set";
import { ChartsList } from "./charts-list";

export function Charts() {
  const [lastUpdate, setLastUpdate] = useState<string>("");
  const [benchSet, setBenchSet] =
    useState<
      {
        name: string;
        dataSet: Map<string, FormattedDataSetEntry[]>;
      }[]
    >();
  const [selectedPlatform, setSelectedPlatform] = useState<string>();
  const [names, setNames] = useState<string[]>();
  const [ready, setReady] = useState<boolean>(false);
  const [isMounted, setIsMounted] = useState<boolean>(false);

  useEffect(() => {
    const data = window.BENCHMARK_DATA;

    if (!ready || !data) {
      return;
    }

    setLastUpdate(new Date(data.lastUpdate).toLocaleString());
    setNames(Object.keys(data.entries));
    setSelectedPlatform(Object.keys(data.entries)[0]);
  }, [ready]);

  useEffect(() => {
    const data = window.BENCHMARK_DATA;

    if (!names || !data) {
      return;
    }

    //// Render download button
    // biome-ignore lint/style/noNonNullAssertion: ignore -- not my code
    document.getElementById("dl-button")!.onclick = () => {
      const dataStr = `data:text/json;charset=utf-8,${encodeURIComponent(JSON.stringify(data))}`;
      const a = document.createElement("a");
      a.href = dataStr;
      a.download = "benchmark_data.json";
      a.click();
    };

    // Prepare data points for charts
    const dataset = Object.keys(data.entries).map((name) => ({
      name,
      dataSet: collectBenchesPerTestCase(data.entries[name]),
    }));

    setBenchSet(dataset);

    for (const { name, dataSet } of dataset) {
      // biome-ignore lint/style/noNonNullAssertion: ignore
      renderBenchSet({ platformName: name, benchSet: dataSet, main: document.getElementById(`chart-${name}`)! });
    }
  }, [names]);

  useEffect(() => {
    setIsMounted(true);
  }, []);

  if (!isMounted) {
    return null;
  }

  return (
    <div>
      <div className="flex items-center justify-between">
        <div>
          <h1 className="title-sm">Benchmarks</h1>
          <p className="text-muted-foreground text-xs">
            Last Update: {lastUpdate || <Skeleton className="inline-block h-2 w-28" />}
          </p>
        </div>
        <div className="flex items-center gap-3">
          <Button id="dl-button" size="sm" variant="ghost" startIcon={<DownloadIcon />}>
            Download All Benchmarks Data
          </Button>
        </div>
      </div>

      <Separator className="mt-2" />

      {names && (
        <Tabs
          onValueChange={(value) => {
            setSelectedPlatform(value);
          }}
          defaultValue={names[0]}
          className="mt-6"
        >
          <div className="flex items-center overflow-auto">
            <TabsList>
              {names.map((name) => (
                <TabsTrigger key={name} value={name}>
                  {name}
                </TabsTrigger>
              ))}
            </TabsList>
          </div>

          <div className="mt-4 flex flex-row gap-8">
            <div className="sticky top-6 hidden min-w-[280px] self-start lg:block">
              {benchSet && selectedPlatform && <ChartsList charts={benchSet} selectedPlatform={selectedPlatform} />}
            </div>

            <div className="w-full">
              {names.map((name) => (
                <TabsContent id={`chart-${name}`} key={name} value={name} />
              ))}
            </div>
          </div>
        </Tabs>
      )}

      <Script
        src="https://risc0.github.io/ghpages/dev/bench/data.js"
        onReady={() => {
          setReady(true);
        }}
      />
    </div>
  );
}
