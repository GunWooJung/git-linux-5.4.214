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
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xe331a714, "gether_get_ifname" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x21a82df1, "phonet_header_ops" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x618911fc, "numa_node" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_ether,phonet");


MODULE_INFO(srcversion, "256179D6BB0C4828D0D240C");
