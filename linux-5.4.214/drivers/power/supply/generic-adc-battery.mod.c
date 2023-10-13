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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xf44ddfd2, "iio_channel_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x49f10e30, "power_supply_am_i_supplied" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x37a0cba, "kfree" },
	{ 0x68e9cf5d, "iio_channel_release" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "477F10F412DCFE582D59D62");
