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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9fd8b035, "cros_ec_cmd_xfer" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2f7ccd6a, "cros_ec_query_all" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe95a4cef, "cros_ec_get_next_event" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "713B4EE6DBC85DBCD07098A");
