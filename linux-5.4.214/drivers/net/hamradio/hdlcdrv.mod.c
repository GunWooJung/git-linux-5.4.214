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
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x4429c2ce, "ax25_ip_xmit" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfeecd8f7, "ax25_header_ops" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E632EFD23DD55EC1730B88D");
