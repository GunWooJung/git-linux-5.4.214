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
	{ 0x241db022, "rsi_91x_init" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xeb791108, "rsi_mac80211_detach" },
	{ 0x2e02637f, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xd523d85d, "skb_push" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x3e02b1ea, "rsi_hal_device_init" },
	{ 0xad263612, "consume_skb" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc840288f, "rsi_91x_deinit" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x7fd2cdbf, "rsi_bt_ops" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA39DF71262EC4099098916");
