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
	{ 0xf646f341, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x115db50d, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0x543eed24, "usb_hcd_poll_rh_status" },
	{ 0xefa83501, "usbip_alloc_iso_desc_pdu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0x179c1b24, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xee29df28, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x8e735eeb, "usbip_stop_eh" },
	{ 0x4609041b, "dev_attr_usbip_debug" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca669996, "fput" },
	{ 0x65d0657a, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x64438057, "usbip_pad_iso" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x43acfb90, "usbip_dump_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x923d8884, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x2a6b8976, "platform_bus" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d18d4f, "usbip_recv_xbuff" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0x19305e, "usbip_start_eh" },
	{ 0x654ee58d, "usbip_pack_pdu" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "F715FD76638E24FF10BDBA2");
