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
	{ 0x12a38747, "usleep_range" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x843772ae, "i2c_add_numbered_adapter" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5F002DC01C607073F59975");
