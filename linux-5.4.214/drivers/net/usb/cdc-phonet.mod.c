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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xd3738830, "cdc_parse_cdc_header" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0x618911fc, "numa_node" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xad263612, "consume_skb" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x21a82df1, "phonet_header_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "phonet");

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");

MODULE_INFO(srcversion, "C272FC3DD6F59F034381CBF");
