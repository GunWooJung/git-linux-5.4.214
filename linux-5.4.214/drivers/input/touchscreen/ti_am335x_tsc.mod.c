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
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xd4656e5f, "am335x_tsc_se_clr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xd44eede4, "dev_pm_clear_wake_irq" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbb79adb2, "am335x_tsc_se_set_cache" },
	{ 0x84de408a, "pm_relax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-tsc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscC*");

MODULE_INFO(srcversion, "55E1450021DAFF3F77CD3F2");
