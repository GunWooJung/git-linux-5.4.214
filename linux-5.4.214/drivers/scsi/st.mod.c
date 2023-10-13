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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x20d72ea6, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x5fd264df, "__class_register" },
	{ 0xcaccfdea, "blk_put_queue" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3ae98b1e, "blk_get_queue" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdb4450e7, "scsi_autopm_get_device" },
	{ 0x30c88773, "scsi_autopm_put_device" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0xcfea0c10, "scsi_ioctl" },
	{ 0x521092ef, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x231a4b01, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xd2d1c04a, "scsi_block_when_processing_errors" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x983c4fa3, "blk_rq_map_user" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4fac3710, "blk_execute_rq_nowait" },
	{ 0x69acdf38, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7c3860dc, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xfb578fc5, "memset" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xc381dac2, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xe14b3ea8, "blk_put_request" },
	{ 0xd24fb382, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x643d22d1, "scsi_set_medium_removal" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x825954a7, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x96848186, "scnprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8E0D631EDBF5B44F67ED6C7");
