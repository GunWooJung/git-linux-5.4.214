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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x268455cd, "hdlc_start_xmit" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x5e8e0b9b, "tty_port_block_til_ready" },
	{ 0x45dd1680, "hdlc_open" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x1f0d9e2e, "alloc_hdlcdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x66f66267, "hdlc_ioctl" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x5335c503, "do_SAK" },
	{ 0x61178382, "tty_hangup" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x97b943e0, "tty_buffer_request_room" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xad263612, "consume_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x148604fd, "tty_ldisc_deref" },
	{ 0x241978e0, "tty_ldisc_ref" },
	{ 0x63616516, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x46ce58c, "tty_port_tty_set" },
	{ 0x54c7c28a, "tty_port_close_end" },
	{ 0x78184765, "tty_ldisc_flush" },
	{ 0x91402c35, "tty_port_close_start" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0xcc3b3c0d, "hdlc_close" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x290d4804, "unregister_hdlc_device" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0xc5850110, "printk" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,pcmcia");

MODULE_ALIAS("pcmcia:m02C5c0050f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "7A8036AE83A3C7C4DD67332");
