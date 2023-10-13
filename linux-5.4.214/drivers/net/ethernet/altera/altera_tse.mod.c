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
	{ 0xeb1919a4, "netdev_info" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0C*");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0C*");

MODULE_INFO(srcversion, "45C33C16E7A00980D4911B3");
