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
	{ 0xbc6e4433, "mcb_unregister_driver" },
	{ 0x49b48d49, "__mcb_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x64c7cf4f, "bgpio_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x23c6a94e, "mcb_request_mem" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xedc03953, "iounmap" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb,gpio-generic");


MODULE_INFO(srcversion, "AA79B67B82951AE78E23048");
