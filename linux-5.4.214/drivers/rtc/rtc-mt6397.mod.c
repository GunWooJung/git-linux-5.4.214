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
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x904a8908, "regmap_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-rtcC*");

MODULE_INFO(srcversion, "7612E54FD606DDA9E3FD9D8");
