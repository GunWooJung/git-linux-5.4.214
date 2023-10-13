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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x24ac8bd2, "mantis_stream_control" },
	{ 0xf58550bb, "mantis_i2c_exit" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2c868cb, "mantis_gpio_set_bits" },
	{ 0xd95b609a, "mantis_dvb_init" },
	{ 0x2dd2ce81, "mantis_i2c_init" },
	{ 0x9bba58b4, "mantis_pci_exit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xcf3e1bca, "mantis_get_mac" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x18f0c09a, "mantis_dma_init" },
	{ 0xc0a75ea0, "mantis_dma_exit" },
	{ 0xdfd3236, "mantis_pci_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2d60c258, "mantis_frontend_power" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x10cfea0, "mantis_dvb_exit" },
};

MODULE_INFO(depends, "mantis_core");

MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000028bc*sc*i*");

MODULE_INFO(srcversion, "8D4E2B786A54C7B8C67E982");
