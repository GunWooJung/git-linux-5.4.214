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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x480006e1, "cros_ec_get_host_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C63C321A65ADA91BBA2D7D0");
