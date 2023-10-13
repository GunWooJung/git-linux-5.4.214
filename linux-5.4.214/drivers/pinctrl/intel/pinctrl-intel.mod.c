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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x9604762, "gpiochip_generic_config" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x84b72a05, "gpiochip_generic_free" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc57ca41e, "handle_edge_irq" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x930071f1, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf22e1253, "gpiochip_is_requested" },
	{ 0x92498d8d, "devm_pinctrl_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ff1cc23, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58ef25ef, "pinctrl_dev_get_drvdata" },
	{ 0x9308d48d, "gpiochip_add_pin_range" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x42b13338, "gpiochip_set_chained_irqchip" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xfc5ef793, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5b5d48c1, "handle_level_irq" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0875E6435963BADEE8B61F7");
