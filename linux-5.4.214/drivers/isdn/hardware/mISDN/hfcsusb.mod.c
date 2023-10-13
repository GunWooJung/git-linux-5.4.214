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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb23a5d90, "queue_ch_frame" },
	{ 0x150a5ddb, "dchannel_senddata" },
	{ 0x54068122, "create_l1" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x44f8bfa7, "bchannel_senddata" },
	{ 0xace985a7, "mISDN_ctrl_bchannel" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xf7d0cca9, "mISDN_clear_bchannel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x5b70e77a, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xbd1ca3bd, "mISDN_initbchannel" },
	{ 0x2012c4cc, "mISDN_initdchannel" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x588886a6, "l1_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xa5fcc0cb, "mISDN_freedchannel" },
	{ 0x213cb3a2, "mISDN_freebchannel" },
	{ 0xa4217a75, "mISDN_unregister_device" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xba84c296, "recv_Echannel" },
	{ 0x4d9bc51c, "recv_Bchannel" },
	{ 0xadcde5b0, "recv_Dchannel" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xfd6490d5, "bchannel_get_rxbuf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92a18466, "get_next_bframe" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x983edcc, "get_next_dframe" },
	{ 0xad263612, "consume_skb" },
	{ 0xc5850110, "printk" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("usb:v0959p2BD0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p1688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0742p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E3p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0846d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp0847d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B0p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v071Dp1005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0525d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C85B33930FBF788A43D1735");
