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
	{ 0x36b6ebbf, "down_killable" },
	{ 0xd3b8ced, "nfc_digital_unregister_device" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x586583b8, "spi_sync" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8a01b120, "nfc_digital_free_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("of:N*T*Cst,st95hf");
MODULE_ALIAS("of:N*T*Cst,st95hfC*");
MODULE_ALIAS("spi:st95hf");

MODULE_INFO(srcversion, "055905CDC8E861D38284B51");
