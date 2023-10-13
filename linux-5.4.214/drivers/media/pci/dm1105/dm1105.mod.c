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
	{ 0x765395c3, "param_ops_int" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
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
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v0000109Fd0000036Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000195Dd00001105sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C24BADDBB50A7837BB43B7C");
