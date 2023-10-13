#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x96848186, "scnprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x55168042, "pci_rescan_bus" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xa4b3193, "pcim_iounmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x29361773, "complete" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000168Cd0000FF1Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EFC60B738D2E3B49E129FAF");
