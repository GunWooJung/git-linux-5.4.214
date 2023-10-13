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
	{ 0x7e199ab7, "scsi_remove_target" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x29311881, "transport_destroy_device" },
	{ 0xeef16a02, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9e169519, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xce2f01d5, "device_del" },
	{ 0xd2e33a2c, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa2a96a84, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x690737c8, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x1c2a4651, "transport_class_unregister" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb6613e14, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0x7dec0c23, "scsi_get_vpd_page" },
	{ 0xcb60ab8c, "transport_remove_device" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x1cbf0608, "bsg_remove_queue" },
	{ 0x33dfc005, "bsg_setup_queue" },
	{ 0x66041d24, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "872DD426AECA3C2AE7589E4");
