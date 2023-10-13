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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf646f341, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe300652f, "usb_set_configuration" },
	{ 0xefa83501, "usbip_alloc_iso_desc_pdu" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8c0f138c, "usb_hub_claim_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x179c1b24, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xf098beb, "usbip_in_eh" },
	{ 0xde7d6c64, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a921311, "strncmp" },
	{ 0x570ff26d, "usb_register_device_driver" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x88ab2db0, "device_attach" },
	{ 0x8e735eeb, "usbip_stop_eh" },
	{ 0x4609041b, "dev_attr_usbip_debug" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca669996, "fput" },
	{ 0x65d0657a, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x43acfb90, "usbip_dump_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x4c99581b, "driver_create_file" },
	{ 0x923d8884, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4e3401b1, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6d18d4f, "usbip_recv_xbuff" },
	{ 0x966ffea1, "usb_hub_release_port" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x32302331, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x19305e, "usbip_start_eh" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x654ee58d, "usbip_pack_pdu" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "91FE7951C02505C04A62BEC");
