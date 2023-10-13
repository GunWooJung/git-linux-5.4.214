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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf10de535, "ioread8" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000100bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000013C3sd00000202bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000013C3sd00000202bc*sc*i*");

MODULE_INFO(srcversion, "B7DA180C0ABF83DC2E619FE");
