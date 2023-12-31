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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdc9abbc5, "power_supply_put" },
	{ 0x5c9ec15b, "power_supply_get_by_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x70e399cc, "power_supply_get_property" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6b81c38b, "power_supply_unreg_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ2415X:*");
MODULE_ALIAS("acpi*:BQ241500:*");
MODULE_ALIAS("acpi*:BQA24150:*");
MODULE_ALIAS("acpi*:BQ241510:*");
MODULE_ALIAS("acpi*:BQA24151:*");
MODULE_ALIAS("acpi*:BQ241520:*");
MODULE_ALIAS("acpi*:BQ241530:*");
MODULE_ALIAS("acpi*:BQA24153:*");
MODULE_ALIAS("acpi*:BQ241550:*");
MODULE_ALIAS("acpi*:BQ241560:*");
MODULE_ALIAS("acpi*:BQA24156:*");
MODULE_ALIAS("acpi*:BQS24157:*");
MODULE_ALIAS("acpi*:BQ241580:*");
MODULE_ALIAS("i2c:bq2415x");
MODULE_ALIAS("i2c:bq24150");
MODULE_ALIAS("i2c:bq24150a");
MODULE_ALIAS("i2c:bq24151");
MODULE_ALIAS("i2c:bq24151a");
MODULE_ALIAS("i2c:bq24152");
MODULE_ALIAS("i2c:bq24153");
MODULE_ALIAS("i2c:bq24153a");
MODULE_ALIAS("i2c:bq24155");
MODULE_ALIAS("i2c:bq24156");
MODULE_ALIAS("i2c:bq24156a");
MODULE_ALIAS("i2c:bq24157s");
MODULE_ALIAS("i2c:bq24158");

MODULE_INFO(srcversion, "737E75FCEAA162D4BB206A2");
