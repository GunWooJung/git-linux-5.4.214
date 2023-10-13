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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa41a2f24, "pm860x_reg_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5915462, "pm860x_bulk_read" },
	{ 0xcb045c8, "pm860x_set_bits" },
	{ 0x28d6de3f, "pm860x_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9501A83D4EE84D747812FE0");
