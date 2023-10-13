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
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa90a5211, "regmap_register_patch" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc57ca41e, "handle_edge_irq" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x50b2e8a5, "regmap_reinit_cache" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xeec88271, "regulator_bulk_get" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x65489876, "gpiod_get_raw_value_cansleep" },
	{ 0xdfe395b9, "regmap_add_irq_chip" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xa4d5d350, "regcache_sync_region" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xedf79230, "regulator_bulk_free" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0xd514771e, "irq_domain_xlate_twocell" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cwlf,wm1811");
MODULE_ALIAS("of:N*T*Cwlf,wm1811C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8994");
MODULE_ALIAS("of:N*T*Cwlf,wm8994C*");
MODULE_ALIAS("of:N*T*Cwlf,wm8958");
MODULE_ALIAS("of:N*T*Cwlf,wm8958C*");
MODULE_ALIAS("i2c:wm1811");
MODULE_ALIAS("i2c:wm1811a");
MODULE_ALIAS("i2c:wm8994");
MODULE_ALIAS("i2c:wm8958");

MODULE_INFO(srcversion, "DD2653AB79DF0735C392088");
