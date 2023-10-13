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
	{ 0x8b6f465f, "irq_setup_alt_chip" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x850c7045, "irq_set_chained_handler_and_data" },
	{ 0xc57ca41e, "handle_edge_irq" },
	{ 0x3eed1f92, "irq_gc_mask_clr_bit" },
	{ 0x479c54e5, "irq_gc_mask_set_bit" },
	{ 0xe13e4ffc, "irq_gc_ack_set_bit" },
	{ 0x7909e5ad, "irq_get_domain_generic_chip" },
	{ 0x10eb0fea, "__irq_alloc_domain_generic_chips" },
	{ 0x5b5d48c1, "handle_level_irq" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0x17cc584b, "irq_generic_chip_ops" },
	{ 0x64c7cf4f, "bgpio_init" },
	{ 0x9e1e2ce5, "acpi_gpiochip_request_interrupts" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x3c72f2c6, "acpi_gpiochip_free_interrupts" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x48aaffe6, "gpiochip_lock_as_irq" },
	{ 0xe2bebbc2, "gpiochip_unlock_as_irq" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:HISI0181:*");
MODULE_ALIAS("acpi*:APMC0D07:*");
MODULE_ALIAS("acpi*:APMC0D81:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpio");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-gpioC*");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2");
MODULE_ALIAS("of:N*T*Capm,xgene-gpio-v2C*");

MODULE_INFO(srcversion, "BE38CB4332C04E8C5CC0A38");
