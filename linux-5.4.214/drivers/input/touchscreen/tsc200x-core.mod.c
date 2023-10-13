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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x66c54ff1, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "810E99662CBFD507F01BF2C");
