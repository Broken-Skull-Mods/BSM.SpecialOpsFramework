$PBTool="D:\SteamLibrary\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe"
$ProjectBasePath="E:\Repos\BSM.SpecialOpsFramework\addons"
$BuildPath="E:\Arma 3 Projects\MODS"

$addons = Get-ChildItem $ProjectBasePath | ?{ $_.PSIsContainer }
$forceUpdate = $false
$confirmation = Read-Host "Do you wanna update all release candiate skipping confirmation? (y/n)"
if ($confirmation -eq 'y') {
    $forceUpdate = $true
}
foreach ($d in $addons){
    $name = $d.Name
    $dExist = [System.IO.File]::Exists("$($ProjectBasePath)\$($name)\publish.ps1")
    if ($dExist){
        Write-Host "[Checking Release] " -ForegroundColor Green -NoNewline;
        Write-Host "$($name)" -ForegroundColor White;
        & "$($ProjectBasePath)\$($name)\publish.ps1" $($BuildPath) $($PBTool) $($name) $($forceUpdate) $($ProjectBasePath)
    }else {
        Write-Host "[Missing Publish] " -ForegroundColor Red -NoNewline;
        Write-Host "$($name)" -ForegroundColor White;
    }
}