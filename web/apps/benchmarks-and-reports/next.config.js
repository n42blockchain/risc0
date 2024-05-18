await import("./src/env.js");
import withBundleAnalyzer from "@next/bundle-analyzer";
import { latestVersion } from "./src/versions.js";

/** @type {import("next").NextConfig} */
let config = {
  eslint: {
    ignoreDuringBuilds: true,
  },
  reactStrictMode: true,
  transpilePackages: ["@risc0/ui"],
  experimental: {
    caseSensitiveRoutes: true,
  },
  images: {
    dangerouslyAllowSVG: false,
    contentDispositionType: "attachment",
    contentSecurityPolicy: "default-src 'self'; script-src 'none'; sandbox;",
  },

  // biome-ignore lint/suspicious/useAwait: needs to be async
  async redirects() {
    return [
      {
        source: "/",
        destination: latestVersion ? `/${latestVersion}` : "/",
        permanent: true,
      },
      {
        source: "/:version/applications-benchmarks",
        destination: "/:version/applications-benchmarks/macOS-apple_m2_pro", // TODO: make sure this is the right default
        permanent: true,
      },
    ];
  },
};

if (process.env.ANALYZE === "true") {
  config = withBundleAnalyzer({
    enabled: true,
  })(config);
}

export default config;
