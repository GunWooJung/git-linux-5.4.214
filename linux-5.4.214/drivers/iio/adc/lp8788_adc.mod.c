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
	{ 0x9a4c322, "_dev_err" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3c967a55, "iio_map_array_register" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6f5dde4e, "lp8788_read_multi_bytes" },
	{ 0x4c412aba, "lp8788_read_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfaa6b854, "lp8788_write_byte" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbbf7bb10, "iio_map_array_unregister" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "9668BC1EAC7D2EFA153A8CA");
