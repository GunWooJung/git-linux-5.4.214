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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x512f1dc, "ade7854_probe" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ade7854,industrialio");

MODULE_ALIAS("i2c:ade7854");
MODULE_ALIAS("i2c:ade7858");
MODULE_ALIAS("i2c:ade7868");
MODULE_ALIAS("i2c:ade7878");

MODULE_INFO(srcversion, "6D75636A9108EEFBEA66C2C");
