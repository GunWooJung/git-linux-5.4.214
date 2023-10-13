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
	{ 0x1d98376c, "rmi_register_transport_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x347fb746, "rmi_dbg" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xa1fcd11a, "rmi_driver_suspend" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe66ff775, "rmi_driver_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xbed774f6, "rmi_unregister_transport_device" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("i2c:rmi4_i2c");

MODULE_INFO(srcversion, "3411AB1DB5FC0834A761A26");
