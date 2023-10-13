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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x48c8367b, "dln2_register_event_cb" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37466030, "dln2_transfer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xb072aeb7, "dln2_unregister_event_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dln2");


MODULE_INFO(srcversion, "2F7B2BE57515326C8CC76FE");
