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
	{ 0xbed38b42, "saa7146_unregister_extension" },
	{ 0xbb8093f3, "saa7146_register_extension" },
	{ 0xb97c21bd, "saa7146_register_device" },
	{ 0xb2e18b60, "saa7146_vv_init" },
	{ 0x739699af, "saa7146_setgpio" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x416c331f, "saa7146_i2c_adapter_prepare" },
	{ 0xdd64e639, "strscpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x9a05c758, "saa7146_vv_release" },
	{ 0xd0f6faa1, "saa7146_unregister_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,saa7146_vv");

MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002401bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002402bc*sc*i*");

MODULE_INFO(srcversion, "57D1E5DA5D33226FCD8C965");
