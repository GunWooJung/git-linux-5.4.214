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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0xee526d0f, "counter_count_mode_str" },
	{ 0x10b864a6, "counter_signal_enum_available_read" },
	{ 0x6366c96c, "counter_signal_enum_write" },
	{ 0xeddffeab, "counter_signal_enum_read" },
	{ 0x2f705720, "counter_count_enum_available_read" },
	{ 0xa206863, "counter_count_enum_write" },
	{ 0xbe2439, "counter_count_enum_read" },
	{ 0x247cfc43, "isa_unregister_driver" },
	{ 0x3ebaac74, "isa_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3feccbbf, "counter_signal_read_value_set" },
	{ 0xf79abbb2, "counter_count_read_value_set" },
	{ 0xb4f0aea, "counter_count_write_value_get" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaaa2e53d, "devm_counter_register" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aab51b, "counter_count_direction_str" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,counter");


MODULE_INFO(srcversion, "774B84E54453BEE283656F1");
