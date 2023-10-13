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
	{ 0xa41a2f24, "pm860x_reg_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x729a87e1, "pm860x_page_reg_write" },
	{ 0xb398b8a9, "pm860x_bulk_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x28d6de3f, "pm860x_reg_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xc5915462, "pm860x_bulk_read" },
	{ 0x9b961e19, "pm860x_page_bulk_read" },
	{ 0xcb045c8, "pm860x_set_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC533059C030E503947AF2C");
