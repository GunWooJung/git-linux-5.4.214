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
	{ 0x3f5a3829, "idma32_dma_probe" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe8217b18, "dw_dma_probe" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6259fd79, "dw_dma_remove" },
	{ 0x674840a9, "do_dw_dma_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcddec82a, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x33508600, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDE5CB08D4141DAE60D1364");
