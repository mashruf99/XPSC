@echo off
setlocal enabledelayedexpansion

set "root=E:\starting\XPSC"

for /d %%d in ("%root%\*") do (
    for /d %%e in ("%%d\*") do (
        echo. > "%%e\.gitkeep"
    )
    echo. > "%%d\.gitkeep"
)

echo .gitkeep files created in all folders.
