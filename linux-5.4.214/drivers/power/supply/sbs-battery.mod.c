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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csbs,sbs-battery");
MODULE_ALIAS("of:N*T*Csbs,sbs-batteryC*");
MODULE_ALIAS("of:N*T*Cti,bq20z75");
MODULE_ALIAS("of:N*T*Cti,bq20z75C*");
MODULE_ALIAS("i2c:bq20z75");
MODULE_ALIAS("i2c:sbs-battery");

MODULE_INFO(srcversion, "C6C9E15B731F0872EEEB6B6");
