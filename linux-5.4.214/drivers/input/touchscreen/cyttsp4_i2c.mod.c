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
	{ 0x62293ef6, "cyttsp_i2c_read_block_data" },
	{ 0xbc28c012, "cyttsp_i2c_write_block_data" },
	{ 0x77c0c314, "cyttsp4_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc7946433, "cyttsp4_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1497e574, "cyttsp4_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cyttsp_i2c_common,cyttsp4_core");

MODULE_ALIAS("i2c:cyttsp4_i2c_adapter");

MODULE_INFO(srcversion, "BD81A7E6F6FE09D795DCA97");
