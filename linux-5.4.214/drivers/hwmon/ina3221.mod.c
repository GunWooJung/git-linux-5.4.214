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
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x28ed4c3b, "regmap_field_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb976d5bb, "devm_regmap_field_alloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0x1e5060cf, "regmap_field_update_bits_base" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");

MODULE_INFO(srcversion, "DBD8B3B72653070D58111D8");
