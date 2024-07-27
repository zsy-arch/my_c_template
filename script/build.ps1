Write-Host $env:Path

if ($args[0] -eq "mingw") {
    # MinGW-w64 on windows (https://github.com/brechtsanders/winlibs_mingw)
    $GCC = "C:\\MyApps\\GCC\\gcc-15.0.0-snapshot20240616-mingw-w64ucrt-12.0.0-r1\\bin\\"
    ##########
    $env:Path = "$env:PATH;$GCC"
}
elseif ($args[0] -eq "vs") {
    # vs2022/2019/BuildTools on windows
    $CMAKE = "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\"
    # or
    # $CMAKE = "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    ##########
    $env:Path = "$env:PATH;$CMAKE"
}
else {
    Write-Output "----------------------------"
    Write-Output "Usage:    build.ps1 [mingw|vs]"
}