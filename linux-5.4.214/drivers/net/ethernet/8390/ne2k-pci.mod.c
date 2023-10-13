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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf3b4b1e6, "ei_poll" },
	{ 0x432e266e, "ei_get_stats" },
	{ 0x32f85a01, "ei_tx_timeout" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x824cf6a7, "ei_set_multicast_list" },
	{ 0xc4423bc4, "ei_start_xmit" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xbea30ae1, "ei_open" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x119721ac, "ei_interrupt" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe2987380, "__alloc_ei_netdev" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x627d090c, "ei_close" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x216cc777, "netdev_err" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x418b0d46, "NS8390_init" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "8390");

MODULE_ALIAS("pci:v000010ECd00008029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000940sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00001401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008E2Ed00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004A14d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010BDd00000E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00005A5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00005598sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008C4Ad00001980sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47538193D9E3EEAEC274F2A");
