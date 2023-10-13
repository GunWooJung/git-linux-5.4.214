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
	{ 0xb71b7859, "spi_controller_resume" },
	{ 0x8e17faf3, "put_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbb4e55fd, "devm_spi_register_controller" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7af8c0f, "spi_controller_suspend" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37466030, "dln2_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dln2");


MODULE_INFO(srcversion, "B5F2BC219B20B9CB1D4442B");
