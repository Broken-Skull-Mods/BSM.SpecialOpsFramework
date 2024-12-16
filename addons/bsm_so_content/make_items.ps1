# HOW TO RUN?
# ./make_items.ps1 "PREFIX" "SUFFIX" "BASENAME" "BASECLASS" "TEXTURE_PATH" "OUTPUT_FILE.hpp" 
# TVs
# ./make_items.ps1 "bsm" "Shows" "TV" "Land_FlatTV_01_F" 1 "\content\screens\texture\shows" "\content\screens\tv_shows_items.hpp" 
# Monitors
# ./make_items.ps1 "bsm" "Shows" "Monitor" "Land_PCSet_01_screen_F" 1 "\content\screens\texture\shows" "\content\screens\monitor_shows_items.hpp" 
# Tablets
# ./make_items.ps1 "bsm" "Shows" "Tablet" "Land_Tablet_01_F" 1 "\content\screens\texture\shows" "\content\screens\tablet_shows_items.hpp" 
$currentFolder=(Get-Item .).FullName
$pboPrefix=(Get-Item .).Name
$prefix=$args[0]
$suffix=$args[1]
$baseName=$args[2]
$baseClass=$args[3]
$textureIndex=$args[4]
$textureLoc=$currentFolder + $args[5]
$outputFile=$currentFolder + $args[6]

$output = ""
Get-ChildItem -Path $textureLoc -Filter *.paa -File | ForEach-Object {
    $filenameNoExt=[System.IO.Path]::GetFileNameWithoutExtension($_)
    $fileFullName=$_.FullName
    $filePBOFullName=$fileFullName.replace($currentFolder,"\$($pboPrefix)")
    $preOutput = "class $($prefix)_$($baseName)_$($suffix)_$($filenameNoExt): $($baseClass) {`n"
    $preOutput += "`tscope=2;`n"
    #hiddenSelectionsTextures[]={"\bsm_so_content\content\screens\texture\screen1.paa"};

    $preOutput += "`tdisplayName=`"$($baseName) ($($suffix) $($filenameNoExt))`";`n"
    $preOutput += "`thiddenSelectionsTextures[]={`"$($filePBOFullName)`"};`n"
    $preOutput += "`tinit=`"This setobjecttexture [$($textureIndex),`"`"$($filePBOFullName)`"`"]`";`n"
    $preOutput += "};`n"
    $output += $preOutput + "`n";
}

if (Test-Path $outputFile) {
    Remove-Item $outputFile
}
New-Item -Path $outputFile -ItemType File

Set-Content -Path $outputFile -Value $output
