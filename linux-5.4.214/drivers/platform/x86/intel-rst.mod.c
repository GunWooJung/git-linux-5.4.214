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
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5748356e, "device_create_file" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3392:*");

MODULE_INFO(srcversion, "7EA02EBE2C9C5A6A151FD01");
