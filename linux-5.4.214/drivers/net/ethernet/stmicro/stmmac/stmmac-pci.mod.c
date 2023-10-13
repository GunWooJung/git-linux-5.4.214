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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x815588a6, "clk_enable" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x20dd5f2c, "stmmac_dvr_probe" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xafa71561, "stmmac_resume" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x2893196a, "pcim_iounmap_regions" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xb44f5231, "clk_register_fixed_rate" },
	{ 0xa68c54d9, "stmmac_dvr_remove" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x2b30291, "stmmac_suspend" },
	{ 0x52252316, "clk_unregister_fixed_rate" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "stmmac");

MODULE_ALIAS("pci:v00000700d00001108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad0000CC09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000937sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d00007102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8CEBE164AD19B6D04F11551");
