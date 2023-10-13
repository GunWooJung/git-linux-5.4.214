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
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3885862f, "seq_putc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf22e1253, "gpiochip_is_requested" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C9A2CD24B54889DD074442F");
