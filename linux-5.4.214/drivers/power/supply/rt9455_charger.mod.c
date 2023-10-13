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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x5fb88a3, "devm_usb_get_phy" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xb976d5bb, "devm_regmap_field_alloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28ed4c3b, "regmap_field_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1e5060cf, "regmap_field_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:RT945500:*");
MODULE_ALIAS("of:N*T*Crichtek,rt9455");
MODULE_ALIAS("of:N*T*Crichtek,rt9455C*");
MODULE_ALIAS("i2c:rt9455-charger");

MODULE_INFO(srcversion, "2B06ED7E5764CB3449CDEB5");
