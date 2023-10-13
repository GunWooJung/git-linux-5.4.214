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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x796f8ca1, "iw_handler_get_thrspy" },
	{ 0xf5723a94, "iw_handler_set_thrspy" },
	{ 0xa571ddec, "iw_handler_get_spy" },
	{ 0x568df3c3, "iw_handler_set_spy" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0x960650ec, "proc_create" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc42fd9fe, "wireless_spy_update" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xad263612, "consume_skb" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x9166fada, "strncpy" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m01A6c0000f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "073BA8FE067EFE78E2A6E0D");
