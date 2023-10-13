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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:pcf50633");

MODULE_INFO(srcversion, "A187C574BA901248C8605DB");
