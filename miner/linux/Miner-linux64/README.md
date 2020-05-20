# CKB miner

## Compatible devices

Squirrels Research Labs ForestKitten 33
Everything?

## Prerequisites

	- SQRL driver

## First steps

If testing for the first time, just launch start.bat / start.sh to make sure you are running the miner with known good parameters. The miner will attempt to flash all compatible devices, then a power cycle (power off, wait, power on) is needed after flashing. The flashed devices will be ready for mining after that.

The annotated start file is easy to modify to start mining on the desired pool to the user's own wallet address. It is recommended to verify correct operation by choosing a unique workername and mining to the example pool to check the hashrate reported by the pool and the miner and compare them. At the time of the writing of this document, the example pool provided was working properly.

## Usage

### Behavior

	1. Checks all the available devices, flashes the compatible ones which are not running the targeted bitstream.
	2. Loads the configuration file if present. Overrides configured clocks if a value is provided in command line parameters.
	3. Begins to work with all devices which were ready at the time of initial check.

Misbehaving devices may crash, which leads to them being disabled. The miner currently does not attempt crash recovery as it usually does not happen in normal conditions. Manual crash recovery may range from simply restarting the miner to power cycling.

The miner expects to be stopped by pressing `q` as simply closing the window on Windows kills the process. Proper shutdown allows it to gracefully stop the devices and save the current state which will be reloaded on the next run.

Stats are displayed periodically with differences compared to previous stats shown in parentheses. As the miner generates an internal target to continuously verify the correct operation of the devices, found share counters are only good for making sure the devices actually operate, and are not related to the difficulty set and therefore shares expected from the pool.

### Supported control keys

	- `q` gracefully stops devices and exits
	- `1`-`9` selects the appropriate worker to be targeted by commands
	- `a` selects all workers to be targeted by commands
	- `-` decreases the clock of targeted worker(s)
	- `+` increases the clock of targeted worker(s)

### Control keys with experimental features

	- `e` enables the targeted worker(s)
	- `d` disables the targeted worker(s)
	- `t` enables the tuning of targeted worker(s) for the highest stable clock. Not recommended to use without supervision
	- `i` helps identifying the targeted worker(s)

## Tuning consideration

Tuning should always target worst-case conditions within the environment. Barely passing parameters found at low temperatures will fail at higher temperatures.

Overclocking too high can lead to lockup, which can be only fixed by reloading the bitstream, therefore the target clock should be preferably chosen not to generate invalid shares at all. Setting a high clock target and relying on throttling for clock control may result in too high clocks when the temperature drops.

## Common issues

	- Device is missing:
		- Freshly flashed device was not power cycled. Just rebooting is not enough.
		- The device locked up, may need reprogramming or a power cycle.
	
	- Device is being throttled:
		- Core temperature increased over the limit. Provided airflow and / or air temperature is not adequate for the desired performance.

	- Miner connects but then gets disconnected almost instantly:
		- Username provided is not a valid wallet address.
		- Password provided is not valid. This is mostly used for custom parameters for the pool, so exact issue varies.
