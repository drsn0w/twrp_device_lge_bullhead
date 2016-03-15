#include <stdlib.h>

const char *mr_init_devices[] =
{
	"/sys/class/graphics/fb0",

	"/sys/block/mmcblk0",
	"/sys/devices/soc.0",
	"/sys/devices/soc.0/f9824900.sdhci",
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0",
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001",
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p37", // boot
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p41", // system
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p45", // userdata

	"/sys/bus/mmc",
	"/sys/bus/mmc/drivers/mmcblk",
	"/sys/module/mmc_core",
	"/sys/module/mmcblk",

	"/sys/devices/virtual/input*",
	"/sys/devices/virtual/misc/uinput",

	// for adb
	"/sys/class/tty/ptmx",
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p41", // system again?
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p40", // cache
	// Missing /sys/class/misc/android_adb and android_usb/android0/f_adb?
	"/sys/bus/usb",

	// persist & firmware
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p24", // persist
	"/sys/devices/soc.0/f9824900.sdhci/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p1", // firmware

	// USB drive
	"/sys/bus/platform/drivers/msm_hsusb_host*",

	NULL // must be null terminated!

};
