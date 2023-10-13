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
	{ 0xf9a482f9, "msleep" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x904a8908, "regmap_write" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa1b7f476, "iio_device_attach_buffer" },
	{ 0x5cdf37eb, "devm_iio_kfifo_allocate" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cmaxim,max30102");
MODULE_ALIAS("of:N*T*Cmaxim,max30102C*");
MODULE_ALIAS("of:N*T*Cmaxim,max30105");
MODULE_ALIAS("of:N*T*Cmaxim,max30105C*");
MODULE_ALIAS("i2c:max30102");
MODULE_ALIAS("i2c:max30105");

MODULE_INFO(srcversion, "8A2A015D29938030D9020ED");
