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
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x8f5c470d, "nvmem_cell_get" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x216cc777, "netdev_err" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00C*");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00C*");

MODULE_INFO(srcversion, "8412291C954FE635A65C107");
