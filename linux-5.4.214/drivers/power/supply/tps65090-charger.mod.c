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
	{ 0x4482cdb, "__refrigerator" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xf9a482f9, "msleep" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tps65090-charger");
MODULE_ALIAS("of:N*T*Cti,tps65090-chargerC*");

MODULE_INFO(srcversion, "8ADB14429563D55F08BA39F");
