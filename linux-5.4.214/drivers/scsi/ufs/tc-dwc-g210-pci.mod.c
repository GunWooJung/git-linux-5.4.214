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
	{ 0xe964e5e9, "ufshcd_dwc_link_startup_notify" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1c9e43c9, "tc_dwc_g210_config_20_bit" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0xbcf5066b, "ufshcd_init" },
	{ 0x709dfc4a, "ufshcd_alloc_host" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x55d49392, "tc_dwc_g210_config_40_bit" },
	{ 0xe77dbf94, "ufshcd_system_suspend" },
	{ 0xe7dfb6e3, "ufshcd_system_resume" },
	{ 0x584bb3f, "ufshcd_runtime_suspend" },
	{ 0xa6a1092a, "ufshcd_runtime_resume" },
	{ 0xccd841fc, "ufshcd_runtime_idle" },
	{ 0xd67deb74, "ufshcd_remove" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x427a6892, "ufshcd_shutdown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ufshcd-dwc,tc-dwc-g210,ufshcd-core");

MODULE_ALIAS("pci:v000016C3d0000B101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000B102sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7CB0B7764B48F7C1943029");
