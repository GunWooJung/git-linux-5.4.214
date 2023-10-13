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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0x29e52193, "pci_get_class" },
	{ 0xeca5d40d, "software_node_find_by_name" },
	{ 0x8db2c04f, "software_node_register_nodes" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x83f290d1, "acpi_dev_gpio_irq_get" },
	{ 0x74130e69, "regulator_put" },
	{ 0x2ed7900d, "regulator_get_optional" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe41d1243, "i2c_acpi_new_device" },
	{ 0x7f7c7415, "device_reprobe" },
	{ 0xeb7ed4b5, "i2c_for_each_dev" },
	{ 0x8b30e894, "acpi_device_hid" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x946d1e6c, "software_node_fwnode" },
	{ 0x4bfba5f1, "software_node_unregister_nodes" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT33FE:*");

MODULE_INFO(srcversion, "37F0ABEF05FE9EFCE5E16F2");
