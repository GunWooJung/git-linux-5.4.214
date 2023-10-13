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
	{ 0x765395c3, "param_ops_int" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x6932b09e, "stream_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x35775925, "misc_deregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "6EE5748130966EFFF0E45E1");
