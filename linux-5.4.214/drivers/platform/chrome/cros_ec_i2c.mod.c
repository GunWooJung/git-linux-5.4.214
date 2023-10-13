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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc55796e, "cros_ec_check_result" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa2a19659, "cros_ec_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x8df02256, "cros_ec_prepare_tx" },
	{ 0xac236c12, "cros_ec_unregister" },
	{ 0xaf8b1477, "cros_ec_suspend" },
	{ 0x2a5eed3f, "cros_ec_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cros_ec");

MODULE_ALIAS("acpi*:GOOG0008:*");
MODULE_ALIAS("i2c:cros-ec-i2c");

MODULE_INFO(srcversion, "B0A05B779CF58372AA7E5C5");
