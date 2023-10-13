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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1f85bb35, "parport_release" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc6cbbc89, "capable" },
	{ 0xccc39a23, "eth_header" },
	{ 0x7201e16a, "eth_header_cache" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0xa916b694, "strnlen" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x16b41dd, "parport_claim" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "661AF4373A5DD3602D2993C");
