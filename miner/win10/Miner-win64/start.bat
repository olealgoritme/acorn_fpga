@echo off

mode con:cols=155 lines=2000

:loop

REM Miner.exe <Algorithm> <Hostname> <Port> <Username> <Password> <Clock [MHz] (optional)>
Miner.exe ckb ckb.f2pool.com 4300 gpuhoarder.Test x 600

echo "Restarting the miner in 10 seconds..."
timeout /t 10

goto loop
