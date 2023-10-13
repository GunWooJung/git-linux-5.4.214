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
	{ 0x765395c3, "param_ops_int" },
	{ 0x195390f1, "w1_unregister_family" },
	{ 0x855f3b29, "w1_register_family" },
	{ 0x647aca1f, "bq27xxx_battery_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9ea21153, "w1_read_8" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa0a15dc7, "bq27xxx_battery_teardown" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire,bq27xxx_battery");


MODULE_INFO(srcversion, "F9854CDD7FEFE23D0610B20");
