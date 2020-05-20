#!/bin/bash

while true
do
	# ./Miner <Algorithm> <Hostname> <Port> <Username> <Password> <Clock [MHz] (optional)>
	./Miner ckb ckb.f2pool.com 4300 gpuhoarder.Test x 600

	echo "Restarting the miner in 10 seconds..."
	sleep 10
done
