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
	{ 0x843772ae, "i2c_add_numbered_adapter" },
	{ 0xe8d567ba, "gpiod_set_consumer_name" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DE4062F27DF18048FB51FA8");
