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
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x290d4804, "unregister_hdlc_device" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x66f66267, "hdlc_ioctl" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x45dd1680, "hdlc_open" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x268455cd, "hdlc_start_xmit" },
	{ 0xcc3b3c0d, "hdlc_close" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1f0d9e2e, "alloc_hdlcdev" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001011d00000009sv00001376sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000009sv*sd00001376bc*sc*i*");

MODULE_INFO(srcversion, "C2F8860DE95EF8E0E155960");
