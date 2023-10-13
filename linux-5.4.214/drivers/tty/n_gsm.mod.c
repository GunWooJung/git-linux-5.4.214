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
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x61178382, "tty_hangup" },
	{ 0x9063e5e3, "tty_register_device" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xa5b65108, "tty_port_install" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd2b73a53, "n_tty_ioctl_helper" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x78184765, "tty_ldisc_flush" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xbc4bd4c1, "tty_port_lower_dtr_rts" },
	{ 0x54c7c28a, "tty_port_close_end" },
	{ 0x91402c35, "tty_port_close_start" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1d0147b9, "tty_port_put" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb61a4cdf, "skb_dequeue_tail" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5e8e0b9b, "tty_port_block_til_ready" },
	{ 0x46ce58c, "tty_port_tty_set" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9f557cf7, "tty_name" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68202a45, "tty_write_room" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xa737b4e9, "tty_hung_up_p" },
	{ 0x6b83a15e, "tty_port_tty_hangup" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xad263612, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EFAE7CCB35E9B07937144FF");
