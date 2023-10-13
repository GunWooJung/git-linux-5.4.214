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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x26c46e7f, "lm3533_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa05c9532, "lm3533_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78386743, "lm3533_update" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,lm3533-core");


MODULE_INFO(srcversion, "D0032C3B2FF499D3A5226FB");
