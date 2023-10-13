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
	{ 0xea92901d, "sst_context_init" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x99ac872f, "sst_context_cleanup" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xede56e9b, "sst_alloc_drv_context" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x9f61df0d, "intel_sst_pm" },
	{ 0xe0cbe952, "sst_configure_runtime_pm" },
	{ 0x709cd25f, "relocate_imr_addr_mrfld" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "snd-intel-sst-core");


MODULE_INFO(srcversion, "F16587AB81DA2F95A75068F");
