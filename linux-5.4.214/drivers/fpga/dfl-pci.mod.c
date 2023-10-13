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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x17eae32f, "dfl_fpga_feature_devs_enumerate" },
	{ 0x9152c65b, "dfl_fpga_enum_info_add_dfl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc79c9517, "dfl_fpga_enum_info_free" },
	{ 0x8a090f42, "dfl_fpga_enum_info_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x3070438f, "dfl_fpga_feature_devs_remove" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0x52ecc69d, "dfl_fpga_cdev_config_ports_vf" },
	{ 0x280c08c2, "dfl_fpga_cdev_config_ports_pf" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl");

MODULE_ALIAS("pci:v00008086d0000BCBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCFDF8470A11AA9F45083C0");
