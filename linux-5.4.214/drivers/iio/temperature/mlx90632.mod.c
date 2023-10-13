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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90632");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90632C*");
MODULE_ALIAS("i2c:mlx90632");

MODULE_INFO(srcversion, "839F440E7DCAEE13D93EEBE");
