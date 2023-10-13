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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x20d72ea6, "scsi_register_driver" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd267dbfb, "device_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x9166fada, "strncpy" },
	{ 0xcfea0c10, "scsi_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x231a4b01, "scsi_ioctl_block_when_processing_errors" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x94fbb209, "scsi_print_sense_hdr" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21B90B80B9FEAF18C21035F");
