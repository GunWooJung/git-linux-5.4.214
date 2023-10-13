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
	{ 0x5128f95e, "class_find_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf728d4b7, "fpga_mgr_load" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2c8167cf, "fpga_bridges_disable" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x8e17faf3, "put_device" },
	{ 0xe77451a2, "fpga_mgr_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x633c4b9, "fpga_bridges_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xd0742a46, "fpga_mgr_lock" },
	{ 0x5328374d, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "fpga-mgr,fpga-bridge");


MODULE_INFO(srcversion, "61E6DDBC4D1BBE9EA04E0EA");
