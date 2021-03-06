#
# Makefile for the Linux kernel device drivers.
#
# 15 Sep 2000, Christoph Hellwig <hch@infradead.org>
# Rewritten to use lists instead of if-statements.
#

ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= gpio/
endif
obj-$(CONFIG_PCI)		+= pci/
obj-$(CONFIG_PARISC)		+= parisc/
obj-$(CONFIG_RAPIDIO)		+= rapidio/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= video/
endif
obj-$(CONFIG_ACPI)		+= acpi/
# PnP must come after ACPI since it will eventually need to check if acpi
# was used and do nothing if so
obj-$(CONFIG_PNP)		+= pnp/
obj-$(CONFIG_ARM_AMBA)		+= amba/

obj-$(CONFIG_XEN)		+= xen/

# regulators early, since some subsystems rely on them to initialize
obj-$(CONFIG_REGULATOR)		+= regulator/

# char/ comes before serial/ etc so that the VT console is the boot-time
# default.
obj-y				+= char/

ifneq ($(CONFIG_ATH_2X8),y)
# gpu/ comes after char for AGP vs DRM startup
obj-y				+= gpu/
endif

obj-$(CONFIG_CONNECTOR)		+= connector/

# i810fb and intelfb depend on char/agp/
obj-$(CONFIG_FB_I810)           += video/i810/
obj-$(CONFIG_FB_INTEL)          += video/intelfb/

obj-y				+= serial/
obj-$(CONFIG_PARPORT)		+= parport/
obj-y				+= base/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= block/ misc/ mfd/
endif
obj-$(CONFIG_NUBUS)		+= nubus/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= macintosh/
endif
obj-$(CONFIG_IDE)		+= ide/
obj-$(CONFIG_SCSI)		+= scsi/
obj-$(CONFIG_ATA)		+= ata/
obj-y				+= net/
obj-$(CONFIG_ATM)		+= atm/
obj-$(CONFIG_FUSION)		+= message/
obj-$(CONFIG_FIREWIRE)		+= firewire/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= ieee1394/
endif
obj-$(CONFIG_UIO)		+= uio/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= cdrom/
obj-y				+= auxdisplay/
endif
obj-$(CONFIG_MTD)		+= mtd/
obj-$(CONFIG_SPI)		+= spi/
obj-$(CONFIG_PCCARD)		+= pcmcia/
obj-$(CONFIG_DIO)		+= dio/
obj-$(CONFIG_SBUS)		+= sbus/
obj-$(CONFIG_ZORRO)		+= zorro/
obj-$(CONFIG_MAC)		+= macintosh/
obj-$(CONFIG_ATA_OVER_ETH)	+= block/aoe/
obj-$(CONFIG_PARIDE) 		+= block/paride/
obj-$(CONFIG_TC)		+= tc/
obj-$(CONFIG_UWB)		+= uwb/
obj-$(CONFIG_USB_OTG_UTILS)	+= usb/otg/
obj-$(CONFIG_USB)		+= usb/
obj-$(CONFIG_USB_MUSB_HDRC)	+= usb/musb/
ifneq ($(CONFIG_ATH_2X8),y)
obj-$(CONFIG_PCI)		+= usb/
endif
obj-$(CONFIG_USB_GADGET)	+= usb/gadget/
obj-$(CONFIG_SERIO)		+= input/serio/
obj-$(CONFIG_GAMEPORT)		+= input/gameport/
obj-$(CONFIG_INPUT)		+= input/
obj-$(CONFIG_I2O)		+= message/
obj-$(CONFIG_RTC_LIB)		+= rtc/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= i2c/ media/
endif
obj-$(CONFIG_PPS)		+= pps/
obj-$(CONFIG_W1)		+= w1/
obj-$(CONFIG_POWER_SUPPLY)	+= power/
obj-$(CONFIG_HWMON)		+= hwmon/
obj-$(CONFIG_THERMAL)		+= thermal/
obj-$(CONFIG_WATCHDOG)		+= watchdog/
obj-$(CONFIG_PHONE)		+= telephony/
obj-$(CONFIG_MD)		+= md/
obj-$(CONFIG_BT)		+= bluetooth/
obj-$(CONFIG_ACCESSIBILITY)	+= accessibility/
obj-$(CONFIG_ISDN)		+= isdn/
obj-$(CONFIG_EDAC)		+= edac/
obj-$(CONFIG_MCA)		+= mca/
obj-$(CONFIG_EISA)		+= eisa/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= lguest/
endif
obj-$(CONFIG_CPU_FREQ)		+= cpufreq/
obj-$(CONFIG_CPU_IDLE)		+= cpuidle/
obj-y				+= idle/
obj-$(CONFIG_MMC)		+= mmc/
obj-$(CONFIG_MEMSTICK)		+= memstick/
obj-$(CONFIG_NEW_LEDS)		+= leds/
obj-$(CONFIG_INFINIBAND)	+= infiniband/
obj-$(CONFIG_SGI_SN)		+= sn/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= firmware/
endif
obj-$(CONFIG_CRYPTO)		+= crypto/
obj-$(CONFIG_SUPERH)		+= sh/
obj-$(CONFIG_GENERIC_TIME)	+= clocksource/
obj-$(CONFIG_DMA_ENGINE)	+= dma/
obj-$(CONFIG_DCA)		+= dca/
obj-$(CONFIG_HID)		+= hid/
obj-$(CONFIG_PPC_PS3)		+= ps3/
obj-$(CONFIG_OF)		+= of/
obj-$(CONFIG_SSB)		+= ssb/
obj-$(CONFIG_VIRTIO)		+= virtio/
obj-$(CONFIG_VLYNQ)		+= vlynq/
obj-$(CONFIG_STAGING)		+= staging/
obj-y				+= platform/
ifneq ($(CONFIG_ATH_2X8),y)
obj-y				+= ieee802154/
endif
