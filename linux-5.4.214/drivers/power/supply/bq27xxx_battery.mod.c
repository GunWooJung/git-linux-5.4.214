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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6607854b, "power_supply_register_no_ws" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xf528924c, "power_supply_get_battery_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5b49b982, "param_get_uint" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdd4fc9f6, "param_set_uint" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x49f10e30, "power_supply_am_i_supplied" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "976F67E24E6C1F842E41CE5");
