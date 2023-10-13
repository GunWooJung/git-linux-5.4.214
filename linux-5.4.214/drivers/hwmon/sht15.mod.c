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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xd3d2594b, "regulator_register_notifier" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3b47fa91, "regulator_unregister_notifier" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:sht10");
MODULE_ALIAS("platform:sht11");
MODULE_ALIAS("platform:sht15");
MODULE_ALIAS("platform:sht71");
MODULE_ALIAS("platform:sht75");

MODULE_INFO(srcversion, "FFCE8710E53468CE45C4D28");
