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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xfd672d72, "watchdog_register_device" },
	{ 0x4ab741fd, "watchdog_init_timeout" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x4d290b16, "watchdog_unregister_device" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003306sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C12C578AC284DCD2DE264B9");
