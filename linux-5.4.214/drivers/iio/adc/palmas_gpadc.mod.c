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
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xf9301932, "device_wakeup_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x904a8908, "regmap_write" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,palmas-gpadc");
MODULE_ALIAS("of:N*T*Cti,palmas-gpadcC*");

MODULE_INFO(srcversion, "F5CD8CCADD085477BFB97F9");
