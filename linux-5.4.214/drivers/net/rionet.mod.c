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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xac51bbbd, "rio_bus_type" },
	{ 0x3170987e, "rio_mport_class" },
	{ 0x4f4feb31, "class_interface_unregister" },
	{ 0x4d45db58, "subsys_interface_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x31ad2250, "subsys_interface_register" },
	{ 0x4b17f185, "class_interface_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xeb3d04b3, "rio_local_get_device_id" },
	{ 0xfb578fc5, "memset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xeeb579ee, "__rio_local_read_config_32" },
	{ 0x25be4b04, "rio_request_outb_dbell" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x528a41, "rio_request_outb_mbox" },
	{ 0x7c8c9b2c, "rio_request_inb_mbox" },
	{ 0xfa914d7a, "rio_request_inb_dbell" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x647771e9, "rio_release_outb_mbox" },
	{ 0x5110091e, "rio_release_inb_mbox" },
	{ 0x87ed38c8, "rio_release_inb_dbell" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5792f848, "strlcpy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2aa232d7, "rio_mport_send_doorbell" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e3b59e0, "rio_release_outb_dbell" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("rapidio:v*d*av*ad*");

MODULE_INFO(srcversion, "84CAB2F8B5BB34C847E4C76");
