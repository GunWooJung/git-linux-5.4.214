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
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0x74130e69, "regulator_put" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8378e785, "regulator_get" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccirrus,cs47l15");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l15C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l35C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l85C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l90C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l91C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs42l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l92C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93");
MODULE_ALIAS("of:N*T*Ccirrus,cs47l93C*");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840");
MODULE_ALIAS("of:N*T*Ccirrus,wm1840C*");

MODULE_INFO(srcversion, "9894080EA7FC87020D529F2");
