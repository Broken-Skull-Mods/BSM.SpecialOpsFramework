$BuildPath=$args[0]
$PBTool=$args[1]
$AddonFolder=$args[2]
$PushIfUpdated=$args[3]
$ProjectBasePath=$args[4]
$Standalone="BSM - Music"
$WorkshopId=3315045187
$ModPath="$($BuildPath)\$($Standalone)"
$OldChangelog="$($ModPath)\$($AddonFolder).txt"
$LastChangelog="$($ModPath)\lastPublishLog.txt"

# if lastpush date is different than last build, update candidate is available
if ((Test-Path $LastChangelog) -and (Test-Path $OldChangelog)) {
    $file1 = Get-Item $($LastChangelog)
    $modfile1 = $file1.LastWriteTime
    $file2 = Get-Item $($OldChangelog)
    $modfile2 = $file2.LastWriteTime
    if ($modfile1 -eq $modfile2) {
        Write-Host "[No Candidate] " -ForegroundColor Yellow -NoNewline;
        Write-Host "$($AddonFolder)" -ForegroundColor White;
        exit
    }else {
        Write-Host "Release Candidate Available";
    }
    
} else {
        Write-Host "Release Candidate Available";
}

if (!($PushIfUpdated)) {
    $confirmation = Read-Host "Release Candidate Available for $($AddonFolder), Do you wanna push update (y/n)?"
    if ($confirmation -ne 'y') {
        Write-Host "[Skipped by User] " -ForegroundColor Yellow -NoNewline;
        Write-Host "$($AddonFolder)" -ForegroundColor White;
        exit
    }
}
Write-Host "[Publishing] " -ForegroundColor Green -NoNewline;
Write-Host "$($AddonFolder)" -ForegroundColor White;

$Params="update /path:`"$($ModPath)`" /changeNoteFile:`"$($OldChangelog)`" /id:$($WorkshopId)"
$ParamSplit = $Params.Split( )
& "$($PBTool)" $ParamSplit

[System.IO.File]::Copy($OldChangelog, $LastChangelog, $true);

