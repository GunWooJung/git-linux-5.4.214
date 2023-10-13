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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc9d174fb, "thermal_zone_device_register" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x92920cb2, "thermal_zone_device_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00009C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DF9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A379sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F451694B844D4971B82289B");
