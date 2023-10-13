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
	{ 0x124bad4d, "kstrtobool" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x868acba5, "get_options" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2571");
MODULE_ALIAS("of:N*T*Camstaos,tsl2571C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772C*");
MODULE_ALIAS("of:N*T*Cavago,apds9930");
MODULE_ALIAS("of:N*T*Cavago,apds9930C*");
MODULE_ALIAS("i2c:tsl2571");
MODULE_ALIAS("i2c:tsl2671");
MODULE_ALIAS("i2c:tmd2671");
MODULE_ALIAS("i2c:tsl2771");
MODULE_ALIAS("i2c:tmd2771");
MODULE_ALIAS("i2c:tsl2572");
MODULE_ALIAS("i2c:tsl2672");
MODULE_ALIAS("i2c:tmd2672");
MODULE_ALIAS("i2c:tsl2772");
MODULE_ALIAS("i2c:tmd2772");
MODULE_ALIAS("i2c:apds9930");

MODULE_INFO(srcversion, "F0908C717EC2BD297A5F2A0");
