@echo off
REM Remove test.o if it exists
if exist test.o del /f test.o

REM Remove ZSOC.vcd if it exists
if exist ZSOC.vcd del /f ZSOC.vcd

REM Convert flash.bin to flash.hex using xxd
@REM xxd -p -c1 Simulation\flash.bin > Simulation\flash.hex

REM Run iverilog
iverilog -g2012 -Winfloop -DTESTBENCH -o test.o -s test -I..\include ^
  soctb.v ^
  Simulation\*.v ^
  ..\CPU\*.v ^
  ..\CPU\*.sv ^
  ..\GPIO\*.v ^
  ..\GPIO\*.sv ^
  ..\Memories\*.v ^
  ..\Memories\*.sv ^
  ..\screenI2C\*.v ^
  ..\screenVGA\*.v ^
  ..\gowin_rpll_800vga\*.v ^
  ..\BRAMS\gowin_dpb_program\*.v ^
  ..\soc.v ^
  ..\CLINT.v ^
  ..\Buses\*.v > out.log 2>&1

REM Check for errors in out.log
findstr /i "error:" out.log >nul
if %errorlevel% equ 0 (
  echo Errors found in compilation. Exiting.
  exit /b 1
)

REM Run vvp
REM The "time" command in Bash isn’t directly portable.
REM Windows "time" just sets/shows system time, so omitted.
vvp -lxt-speed test.o

REM Optionally run Python verification
REM python vcd_verification.py ZSOC.vcd

REM Run surfer
surfer.exe ZSOC.vcd --state-file test.surf.ron
