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
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3e5704e8, "gnss_put_device" },
	{ 0xe3b7bdee, "gnss_register_device" },
	{ 0xe9bc55af, "serdev_device_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5ab9030, "gnss_deregister_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfbaa570, "gnss_allocate_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf6666592, "__serdev_device_driver_register" },
	{ 0x29dc21b3, "serdev_device_wait_until_sent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcd1e5ae, "serdev_device_write" },
	{ 0x7580c311, "serdev_device_write_wakeup" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7f0018e7, "serdev_device_open" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xfaec895c, "serdev_device_set_flow_control" },
	{ 0x48f6bdcb, "gnss_insert_raw" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xaa66b3f4, "serdev_device_set_baudrate" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "D84AEA9C10C9C42CD3397E9");
