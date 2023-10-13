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
	{ 0xeca6138d, "intel_th_driver_unregister" },
	{ 0x1c5c9cda, "intel_th_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9e3174af, "stm_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcb023ca, "intel_th_set_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x109e36c, "stm_register_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th,stm_core");


MODULE_INFO(srcversion, "5E568602BBCEA43DACFD9B2");
