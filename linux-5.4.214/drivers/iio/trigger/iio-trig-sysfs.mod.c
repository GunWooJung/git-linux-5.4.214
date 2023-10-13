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
	{ 0xa52b8e97, "iio_bus_type" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x535449e7, "device_initialize" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0x6f395e65, "__module_get" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0x6923ce63, "irq_work_sync" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "B7EA28AB90A282A1B31BD51");
