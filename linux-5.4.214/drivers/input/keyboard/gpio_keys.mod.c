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
	{ 0x96848186, "scnprintf" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x1e72aaca, "gpiod_set_debounce" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa41d1ff4, "gpiod_is_active_low" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xda08d695, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x71fb24ae, "devm_request_any_context_irq" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x74bb02b4, "pm_stay_awake" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x84de408a, "pm_relax" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x66c54ff1, "input_event" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
