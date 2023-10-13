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
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x35775925, "misc_deregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SMO8800:*");
MODULE_ALIAS("acpi*:SMO8801:*");
MODULE_ALIAS("acpi*:SMO8810:*");
MODULE_ALIAS("acpi*:SMO8811:*");
MODULE_ALIAS("acpi*:SMO8820:*");
MODULE_ALIAS("acpi*:SMO8821:*");
MODULE_ALIAS("acpi*:SMO8830:*");
MODULE_ALIAS("acpi*:SMO8831:*");

MODULE_INFO(srcversion, "34B62344B2668705B1E68B9");
