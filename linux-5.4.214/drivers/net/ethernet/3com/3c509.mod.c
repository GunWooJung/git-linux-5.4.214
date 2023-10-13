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
	{ 0x38bd0581, "eisa_driver_unregister" },
	{ 0x247cfc43, "isa_unregister_driver" },
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0xfb77cba3, "eisa_driver_register" },
	{ 0x3ebaac74, "isa_register_driver" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9717696d, "netdev_boot_setup_check" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sTCM5090*");
MODULE_ALIAS("eisa:sTCM5091*");
MODULE_ALIAS("eisa:sTCM5092*");
MODULE_ALIAS("eisa:sTCM5093*");
MODULE_ALIAS("eisa:sTCM5094*");
MODULE_ALIAS("eisa:sTCM5095*");
MODULE_ALIAS("eisa:sTCM5098*");
MODULE_ALIAS("pnp:dTCM5090*");
MODULE_ALIAS("acpi*:TCM5090:*");
MODULE_ALIAS("pnp:dTCM5091*");
MODULE_ALIAS("acpi*:TCM5091:*");
MODULE_ALIAS("pnp:dTCM5094*");
MODULE_ALIAS("acpi*:TCM5094:*");
MODULE_ALIAS("pnp:dTCM5095*");
MODULE_ALIAS("acpi*:TCM5095:*");
MODULE_ALIAS("pnp:dTCM5098*");
MODULE_ALIAS("acpi*:TCM5098:*");
MODULE_ALIAS("pnp:dPNP80f7*");
MODULE_ALIAS("acpi*:PNP80F7:*");
MODULE_ALIAS("pnp:dPNP80f8*");
MODULE_ALIAS("acpi*:PNP80F8:*");

MODULE_INFO(srcversion, "943D464EAE9A2138BDD9278");
