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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xab124e4f, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xde7d6c64, "usb_lock_device_for_reset" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x28c2e85c, "usb_get_urb" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0xf6ea5343, "blk_queue_update_dma_alignment" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x53632dee, "scsi_report_bus_reset" },
	{ 0x3c05a4c5, "usb_alloc_streams" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ba4da5c, "usb_free_streams" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp1061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1932d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "6C8C1021C7977445A2DA1C2");
