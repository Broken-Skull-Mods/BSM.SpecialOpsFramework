$BuildPath=$args[0]
$ProjectBasePath=$args[1]
$PBOTool=$args[2]
$TempFolder=$args[3]
$Includes=$args[4]
$Signature=$args[5]
$AddonFolder=$args[6]
$Standalone="BSM - Faction Russochina PlaSpetsnaz (2028)"
$IncludeAIO=$false

$Output1="$($BuildPath)\$($Standalone)\addons"

$Input1="$($ProjectBasePath)\$($AddonFolder)"
$NewChangelog="$($ProjectBasePath)\$($AddonFolder)\changelog.txt"
$OldChangelog="$($BuildPath)\$($Standalone)\$($AddonFolder).txt"

if ((Test-Path $NewChangelog) -and (Test-Path $OldChangelog)) {
    $file1 = Get-Item $($NewChangelog)
    $modfile1 = $file1.LastWriteTime
    Write-Host "$($file1.Name) was last modified on $modfile1"

    $file2 = Get-Item $($OldChangelog)
    $modfile2 = $file2.LastWriteTime
    Write-Host "$($file2.Name) was last modified on $modfile2"
    if ($modfile1 -eq $modfile2) {
        Write-Host "Changelog was not updated skipping build";
        exit
    }else {
        Write-Host "Changelog update detected building addon";
    }
    
} else {
    Write-Host "Copying Changelog that was not previously existing"
}


Write-Host "Building the addon: $($AddonFolder)"
$Params="`"$($Input1)`" `"$($Output1)`" -packonly -clear -temp=`"$($TempFolder)`" -prefix=$($AddonFolder) -project=E: -include=`"$($Includes)`" -sign=`"$($Signature)`""
$ParamSplit = $Params.Split( )
& "$($PBOTool)" $ParamSplit
if ($IncludeAIO) {
    # Send into ALL IN ONE PACK
    $AllInONE="BSM - AIO"
    $Output2="$($BuildPath)\$($AllInONE)\addons"
    $Params="`"$($Input1)`" `"$($Output2)`" -packonly -clear -temp=`"$($TempFolder)`" -prefix=$($AddonFolder) -project=E: -include=`"$($Includes)`" -sign=`"$($Signature)`""
    $ParamSplit = $Params.Split( )
    & "$($PBOTool)" $ParamSplit
    [System.IO.File]::Copy($NewChangelog, "$($BuildPath)\$($AllInONE)\$($AddonFolder).txt", $true);
}


# Write-Host "Copying Changelog..."
[System.IO.File]::Copy($NewChangelog, $OldChangelog, $true);
