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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x843772ae, "i2c_add_numbered_adapter" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2bb5044c, "kempld_release_mutex" },
	{ 0xb683808, "kempld_write8" },
	{ 0xea2f1d04, "kempld_read8" },
	{ 0xc4396431, "kempld_get_mutex" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kempld-core");


MODULE_INFO(srcversion, "4B4CE64063497498A43C78C");
