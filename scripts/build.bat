@echo off
setlocal enabledelayedexpansion

set time=3

echo 0=All(Default)
echo 1=x86 Debug
echo 2=x86 Release
echo 3=x64 Debug
echo 4=x64 Release
echo.
echo Please enter the build type number within %time% seconds:
choice /c 12340 /n /t %time% /d 0 >nul
if errorlevel 5 (
    set build_type=0
) else (
    set /a build_type=!errorlevel!
)

echo Build type number is: !build_type!

:: build & install & package
powershell.exe -ExecutionPolicy RemoteSigned -File ".\proj_build_install_package.ps1" -build_type %build_type%

:: create-props
powershell.exe -ExecutionPolicy RemoteSigned -File ".\create_props.ps1"

echo.
echo.
echo Build completed.
endlocal

echo This Window will automatically close in %time% seconds..
choice -C YN -D Y -N -T %time% 1> nul
