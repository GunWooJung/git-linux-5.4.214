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
	{ 0x480006e1, "cros_ec_get_host_event" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc811d416, "devm_power_supply_register_no_ws" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "05C9F9ADA7D868B6109B6A2");
