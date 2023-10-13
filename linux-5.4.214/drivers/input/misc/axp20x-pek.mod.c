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
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x94a09154, "input_register_device" },
	{ 0x71fb24ae, "devm_request_any_context_irq" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x66c54ff1, "input_event" },
	{ 0x904a8908, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9166fada, "strncpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp20x-pek");
MODULE_ALIAS("platform:axp221-pek");

MODULE_INFO(srcversion, "D35F9A025CBAC73EF8C0B61");
