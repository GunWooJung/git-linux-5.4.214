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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xd814d6cb, "i2c_root_adapter" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x25730e51, "i2c_get_adapter" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3483b5a8, "gpiod_set_array_value_cansleep" },
	{ 0xb093a6fd, "i2c_put_adapter" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-gpio");
MODULE_ALIAS("of:N*T*Ci2c-mux-gpioC*");

MODULE_INFO(srcversion, "72A79AD9F8E864DE24B7BAC");
