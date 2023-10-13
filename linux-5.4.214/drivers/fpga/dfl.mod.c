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
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xc45eff34, "devm_fpga_region_create" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc2368cbf, "fpga_region_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x75a29558, "fpga_region_register" },
	{ 0x8e17faf3, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "fpga-region");


MODULE_INFO(srcversion, "7E57407C8A12714ACCA2931");
