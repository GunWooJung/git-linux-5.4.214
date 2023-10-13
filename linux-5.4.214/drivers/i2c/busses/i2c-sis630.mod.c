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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000964sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "32FF13B4BDB3742E1E0320F");
