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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x64c7cf4f, "bgpio_init" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:AMDF030:*");
MODULE_ALIAS("acpi*:AMDIF030:*");

MODULE_INFO(srcversion, "F1E3139D916479DE288048D");
