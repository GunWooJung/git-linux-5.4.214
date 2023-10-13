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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x195390f1, "w1_unregister_family" },
	{ 0x855f3b29, "w1_register_family" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x49f10e30, "power_supply_am_i_supplied" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xc89a56bf, "w1_write_block" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2db79d6e, "w1_read_block" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0x3ab00a6c, "w1_reset_select_slave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
