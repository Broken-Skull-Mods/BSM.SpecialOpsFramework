$PBOTool="D:\SteamLibrary\steamapps\common\Arma 3 Tools\AddonBuilder\addonbuilder.exe"
$ProjectBasePath="E:\Repos\BSM.SpecialOpsFramework\addons"
$BuildPath="E:\Arma 3 Projects\MODS"
$Signature="D:\SteamLibrary\steamapps\common\Arma 3 Tools\DSSignFile\bloodypvk.biprivatekey"
$Includes="E:\Repos\BSM.SpecialOpsFramework\Addonbuilder_Includes.txt"
$TempFolder="C:\Users\Administrator\AppData\Local\Arma 3"

$addons = Get-ChildItem $ProjectBasePath | ?{ $_.PSIsContainer }

foreach ($d in $addons){
    $name = $d.Name
    $dExist = [System.IO.File]::Exists("$($ProjectBasePath)\$($name)\build.ps1")
    if ($dExist){
        Write-Host "[Running Build] " -ForegroundColor Green -NoNewline;
        Write-Host "$($name)" -ForegroundColor White;
        & "$($ProjectBasePath)\$($name)\build.ps1" $($BuildPath) $($ProjectBasePath) $($PBOTool) $($TempFolder) $($Includes) $($Signature) $($name)
    }else {
        Write-Host "[Missing Build] " -ForegroundColor Red -NoNewline;
        Write-Host "$($name)" -ForegroundColor White;
    }
}

# & "$($ProjectBasePath)\bsm_so_main\build.ps1" $($BuildPath) $($ProjectBasePath) $($PBOTool) $($TempFolder) $($Includes) $($Signature)
# call "%ProjectBasePath%\bsm_so_main\build.bat"
# call "%ProjectBasePath%\bsm_so_main\build.bat"

# @echo "Building bsm_faction_base..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_base" "%BuildPath%\BSM - Faction Core\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_base -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_base" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_base -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_layout_malden..."
# %PBOTool% "%ProjectBasePath%\bsm_so_layout_malden" "%BuildPath%\BSM - Layouts for Malden\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_layout_malden -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_layout_system..."
# %PBOTool% "%ProjectBasePath%\bsm_so_layout_system" "%BuildPath%\BSM - Layout System\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_layout_system -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_layout_system" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_layout_system -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_patches..."
# %PBOTool% "%ProjectBasePath%\bsm_so_patches" "%BuildPath%\BSM - Patches\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_patches -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_patches" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_patches -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_powergrid..."
# %PBOTool% "%ProjectBasePath%\bsm_so_powergrid" "%BuildPath%\BSM - Powergrid\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_powergrid -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_powergrid" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_powergrid -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_kamikazee..."
# %PBOTool% "%ProjectBasePath%\bsm_so_kamikazee" "%BuildPath%\BSM - Kamikazee\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_kamikazee -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_kamikazee" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_kamikazee -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_chest_phone..."
# %PBOTool% "%ProjectBasePath%\bsm_chest_phone" "%BuildPath%\BSM - DT Technologies\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_chest_phone -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_chest_phone" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_chest_phone -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_helo_control..."
# %PBOTool% "%ProjectBasePath%\bsm_so_helo_control" "%BuildPath%\BSM - Helicopter Control\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_helo_control -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_helo_control" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_helo_control -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_goodies..."
# %PBOTool% "%ProjectBasePath%\bsm_so_goodies" "%BuildPath%\BSM - Core\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_goodies -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_goodies" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_goodies -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_polyliner..."
# %PBOTool% "%ProjectBasePath%\bsm_polyliner" "%BuildPath%\BSM - Drawing Saver\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_polyliner -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_polyliner" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_polyliner -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_atlas_tfar_compat..."
# %PBOTool% "%ProjectBasePath%\bsm_so_atlas_tfar_compat" "%BuildPath%\BSM - TFAR Atlas Backpack Compatibility\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_atlas_tfar_compat -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_atlas_tfar_compat" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_atlas_tfar_compat -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_athena_tfar_compat..."
# %PBOTool% "%ProjectBasePath%\bsm_so_athena_tfar_compat" "%BuildPath%\BSM - TFAR Athena Backpack Compatibility\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_athena_tfar_compat -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_athena_tfar_compat" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_athena_tfar_compat -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_medical..."
# %PBOTool% "%ProjectBasePath%\bsm_so_medical" "%BuildPath%\BSM - Medical\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_medical -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_medical" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_medical -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_sleeptight..."
# %PBOTool% "%ProjectBasePath%\bsm_so_sleeptight" "%BuildPath%\BSM - Sleeptight\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_sleeptight -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_sleeptight" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_sleeptight -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_fast_travel..."
# %PBOTool% "%ProjectBasePath%\bsm_so_fast_travel" "%BuildPath%\BSM - Fast Travel\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_fast_travel -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_fast_travel" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_fast_travel -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_unconsciousCam..."
# %PBOTool% "%ProjectBasePath%\bsm_so_unconsciousCam" "%BuildPath%\BSM - Unconscious Cam\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_unconsciousCam -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_unconsciousCam" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_unconsciousCam -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_audio..."
# %PBOTool% "%ProjectBasePath%\bsm_so_audio" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_audio -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_audio" "%BuildPath%\BSM - Audio\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_audio -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_audio..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_audio" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_audio -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_audio" "%BuildPath%\BSM - Faction Core\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_audio -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_halo_jump..."
# %PBOTool% "%ProjectBasePath%\bsm_so_halo_jump" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_halo_jump -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_halo_jump" "%BuildPath%\BSM - Halo Jump\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_halo_jump -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_cba..."
# %PBOTool% "%ProjectBasePath%\bsm_so_cba" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_cba -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_content..."
# %PBOTool% "%ProjectBasePath%\bsm_so_content" "%BuildPath%\BSM - Content\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_content -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_content" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_content -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_music..."
# %PBOTool% "%ProjectBasePath%\bsm_so_music" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_music -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_so_zeus..."
# %PBOTool% "%ProjectBasePath%\bsm_so_zeus" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_zeus -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_so_zeus" "%BuildPath%\BSM - Zeus\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_zeus -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_system_arsenal..."
# %PBOTool% "%ProjectBasePath%\bsm_system_arsenal" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_system_arsenal -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_system_arsenal" "%BuildPath%\BSM - Factionized Arsenal\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_system_arsenal -project=E: -include=%Includes% -sign=%Signature%


# @echo "Building bsm_so_generators..."
# %PBOTool% "E:\Repos\BSM.SpecialOpsFramework.Dev\bsm_so_generators" "%BuildPath%\BSM - Development\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_so_generators -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_asf_2008..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_asf_2008" "%BuildPath%\BSM - Faction ASF (2008)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_asf_2008 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_asf_2008" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_asf_2008 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_dilf_2009..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_dilf_2009" "%BuildPath%\BSM - Faction DILF (2009)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_dilf_2009 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_dilf_2009" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_dilf_2009 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_shayetet_2023..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_shayetet_2023" "%BuildPath%\BSM - Faction Shayetet (2023)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_shayetet_2023 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_shayetet_2023" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_shayetet_2023 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_mali_fama_2021..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_mali_fama_2021" "%BuildPath%\BSM - Faction Mali Fama (2021)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_mali_fama_2021 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_mali_fama_2021" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_mali_fama_2021 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_us_marines_2012..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_us_marines_2012" "%BuildPath%\BSM - Faction US Marines (2012)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_us_marines_2012 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_us_marines_2012" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_us_marines_2012 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_usa_devgru_2023..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_usa_devgru_2023" "%BuildPath%\BSM - Faction US DEVGRU (2023)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_usa_devgru_2023 -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_usa_devgru_2023" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_usa_devgru_2023 -project=E: -include=%Includes% -sign=%Signature%

# @echo "Building bsm_faction_usa_ranger_2000s..."
# %PBOTool% "%ProjectBasePath%\bsm_faction_usa_ranger_2000s" "%BuildPath%\BSM - Faction US Ranger (2000s)\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_usa_ranger_2000s -project=E: -include=%Includes% -sign=%Signature%
# %PBOTool% "%ProjectBasePath%\bsm_faction_usa_ranger_2000s" "%BuildPath%\BSM - AIO\addons" -packonly -clear -temp=TEMPPATH -prefix=bsm_faction_usa_ranger_2000s -project=E: -include=%Includes% -sign=%Signature%



# @echo off

# pause