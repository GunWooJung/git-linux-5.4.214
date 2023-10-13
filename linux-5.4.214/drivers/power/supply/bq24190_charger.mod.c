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
	{ 0x96848186, "scnprintf" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0xf528924c, "power_supply_get_battery_info" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6441e9b2, "power_supply_set_input_current_limit_from_supplier" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192");
MODULE_ALIAS("i2c:bq24192i");
MODULE_ALIAS("i2c:bq24196");

MODULE_INFO(srcversion, "4959AB195E65B86273C57E2");
