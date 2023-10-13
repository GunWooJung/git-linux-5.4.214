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
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x1c201ce4, "i2c_dw_probe" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BC0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F6A3F6C2358A5796C7B9410");
