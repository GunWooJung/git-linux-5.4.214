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
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2560");
MODULE_ALIAS("of:N*T*Camstaos,tsl2560C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561");
MODULE_ALIAS("of:N*T*Camstaos,tsl2561C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562");
MODULE_ALIAS("of:N*T*Camstaos,tsl2562C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563");
MODULE_ALIAS("of:N*T*Camstaos,tsl2563C*");
MODULE_ALIAS("i2c:tsl2560");
MODULE_ALIAS("i2c:tsl2561");
MODULE_ALIAS("i2c:tsl2562");
MODULE_ALIAS("i2c:tsl2563");

MODULE_INFO(srcversion, "F1E94D83B2859C672615D74");
