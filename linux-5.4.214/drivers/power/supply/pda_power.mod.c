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
	{ 0xf928c918, "power_supply_changed" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xd5c9b13d, "usb_get_phy" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8378e785, "regulator_get" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x66d63c5e, "regulator_set_current_limit" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x74130e69, "regulator_put" },
	{ 0xb3f93fc7, "usb_put_phy" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D21A4C966C03ACB6382433A");
