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
	{ 0xaed06536, "_dev_warn" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x1f8df834, "wm831x_bulk_read" },
	{ 0xfe5f03ea, "wm831x_reg_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C8AAC81B7025E90E6FFC150");
