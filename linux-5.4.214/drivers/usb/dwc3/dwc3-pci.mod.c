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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9bfdcbb2, "gpiod_get_optional" },
	{ 0x5e0b3f66, "gpiod_add_lookup_table" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa4b3193, "pcim_iounmap" },
	{ 0xf9a482f9, "msleep" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2371be34, "platform_device_add_properties" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc219f6a1, "gpiod_remove_lookup_table" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7d59dd46, "pm_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000022B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F37sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000119Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AAAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A36Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007AE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007912sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4266AB21A787380DDBE7703");
