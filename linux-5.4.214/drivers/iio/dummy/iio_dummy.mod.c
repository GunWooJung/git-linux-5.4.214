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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa63a2ce, "iio_register_sw_device_type" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4b60e047, "iio_unregister_sw_device_type" },
	{ 0x83298cb2, "iio_device_free" },
	{ 0x13454a0a, "iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "industrialio-sw-device,industrialio");


MODULE_INFO(srcversion, "17CC50EAB194B13BFFD1A0B");
