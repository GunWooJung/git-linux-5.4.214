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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a921311, "strncmp" },
	{ 0x410ecd8a, "vcc_process_recv_queue" },
	{ 0x6f395e65, "__module_get" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xc5850110, "printk" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd523d85d, "skb_push" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xad263612, "consume_skb" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x63616516, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "64A5E06F79A1F9C70A4155C");
