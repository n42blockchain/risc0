import { truncate } from "@risc0/ui/utils/truncate";
import { CopyButton } from "shared/client/components/copy-button";
import { fetchDatasheetCommitHash } from "../_actions/fetch-datasheet-commit-hash";

export default async function DatasheetCommitHashButton({ version }: { version: string }) {
  const commitHash = await fetchDatasheetCommitHash({ version });

  if (!commitHash) {
    return null;
  }

  return (
    <CopyButton size="sm" variant="ghost" value={commitHash}>
      Commit Hash<span className="hidden sm:inline">: {truncate(commitHash, 15)}</span>
    </CopyButton>
  );
}
