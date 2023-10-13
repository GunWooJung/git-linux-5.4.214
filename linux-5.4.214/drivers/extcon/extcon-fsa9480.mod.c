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
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfcs,fsa9480");
MODULE_ALIAS("of:N*T*Cfcs,fsa9480C*");
MODULE_ALIAS("of:N*T*Cfcs,fsa880");
MODULE_ALIAS("of:N*T*Cfcs,fsa880C*");
MODULE_ALIAS("i2c:fsa9480");

MODULE_INFO(srcversion, "A2B49DB899DE498B4EE8904");
