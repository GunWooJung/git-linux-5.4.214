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
	{ 0x7b40cb30, "transport_class_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xabd899ec, "attribute_container_classdev_to_container" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xeef16a02, "attribute_container_unregister" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x690737c8, "attribute_container_register" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x1c2a4651, "transport_class_unregister" },
	{ 0xc3527125, "attribute_container_find_class_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8e17faf3, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x2c42c58e, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6EDEED1D99649BFAD4562FE");
