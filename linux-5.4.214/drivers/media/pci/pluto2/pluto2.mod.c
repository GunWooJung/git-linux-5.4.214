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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x84d1d637, "tda10046_attach" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfb578fc5, "memset" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x80500894, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core,tda1004x,i2c-algo-bit");

MODULE_ALIAS("pci:v00000432d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7FDBF00DBE62524C705AE33");
