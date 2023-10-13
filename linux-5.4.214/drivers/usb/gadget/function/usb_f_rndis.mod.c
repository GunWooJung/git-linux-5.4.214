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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdb61fc, "gether_get_qmult" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xdcddd042, "gether_setup_name_default" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe331a714, "gether_get_ifname" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x2a0eb1ad, "gether_set_host_addr" },
	{ 0xb37909e8, "gether_get_dev_addr" },
	{ 0x1f8a63f2, "gether_connect" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1d2e4d7c, "gether_set_gadget" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa8d80e11, "gether_get_host_addr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x641676d2, "gether_set_qmult" },
	{ 0xa86c0bc7, "gether_get_host_addr_u8" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x96bcd5be, "gether_register_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x54e8b57d, "gether_set_dev_addr" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa24a2871, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0xad263612, "consume_skb" },
	{ 0x927f8817, "usb_os_desc_prepare_interf_dir" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether");


MODULE_INFO(srcversion, "6B8E6BEFDFB5C4A5102F71F");
