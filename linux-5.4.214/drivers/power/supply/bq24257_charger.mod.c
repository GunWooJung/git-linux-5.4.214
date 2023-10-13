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
	{ 0xd111bb59, "_dev_info" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xb976d5bb, "devm_regmap_field_alloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x3fbbbfb1, "regcache_drop_region" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96848186, "scnprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1e5060cf, "regmap_field_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x28ed4c3b, "regmap_field_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ242500:*");
MODULE_ALIAS("acpi*:BQ242510:*");
MODULE_ALIAS("acpi*:BQ242570:*");
MODULE_ALIAS("of:N*T*Cti,bq24250");
MODULE_ALIAS("of:N*T*Cti,bq24250C*");
MODULE_ALIAS("of:N*T*Cti,bq24251");
MODULE_ALIAS("of:N*T*Cti,bq24251C*");
MODULE_ALIAS("of:N*T*Cti,bq24257");
MODULE_ALIAS("of:N*T*Cti,bq24257C*");
MODULE_ALIAS("i2c:bq24250");
MODULE_ALIAS("i2c:bq24251");
MODULE_ALIAS("i2c:bq24257");

MODULE_INFO(srcversion, "23B7E11A3A979469F81B095");
