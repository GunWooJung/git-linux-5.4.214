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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xc5850110, "printk" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000550bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000552bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00005580bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv000013C2sd00003016bc*sc*i*");

MODULE_INFO(srcversion, "BE9C62A4C3005BC43FA5DF5");
