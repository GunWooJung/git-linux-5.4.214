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
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x472afdf9, "backlight_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:APP0002:*");

MODULE_INFO(srcversion, "2F3CEB15C3D31BE5ED0E17F");
