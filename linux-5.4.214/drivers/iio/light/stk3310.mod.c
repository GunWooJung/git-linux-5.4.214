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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xb976d5bb, "devm_regmap_field_alloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28ed4c3b, "regmap_field_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e5060cf, "regmap_field_update_bits_base" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Csensortek,stk3310");
MODULE_ALIAS("of:N*T*Csensortek,stk3310C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3311");
MODULE_ALIAS("of:N*T*Csensortek,stk3311C*");
MODULE_ALIAS("of:N*T*Csensortek,stk3335");
MODULE_ALIAS("of:N*T*Csensortek,stk3335C*");
MODULE_ALIAS("acpi*:STK3310:*");
MODULE_ALIAS("acpi*:STK3311:*");
MODULE_ALIAS("acpi*:STK3335:*");
MODULE_ALIAS("i2c:STK3310");
MODULE_ALIAS("i2c:STK3311");
MODULE_ALIAS("i2c:STK3335");

MODULE_INFO(srcversion, "88803FD805B4B2E15602F37");
