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
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xefa83501, "usbip_alloc_iso_desc_pdu" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x179c1b24, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x8e735eeb, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca669996, "fput" },
	{ 0x65d0657a, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x923d8884, "usbip_recv" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xab37f21b, "wake_up_process" },
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
	{ 0x69acdf38, "memcpy" },
	{ 0x6d18d4f, "usbip_recv_xbuff" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x19305e, "usbip_start_eh" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x654ee58d, "usbip_pack_pdu" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core,udc-core");


MODULE_INFO(srcversion, "07EEE1E628464EF3A4C79B2");
