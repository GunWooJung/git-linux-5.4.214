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
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x5fb49542, "sfp_register_socket" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x7825ef58, "mdio_i2c_alloc" },
	{ 0x97ac77d7, "i2c_acpi_find_adapter_by_handle" },
	{ 0x38d977f3, "__acpi_node_get_property_reference" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x536822e3, "sfp_module_insert" },
	{ 0xd21e6473, "hwmon_device_register_with_info" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6b413c9b, "sfp_link_down" },
	{ 0x5fd2de91, "phy_start" },
	{ 0xb8a73303, "sfp_add_phy" },
	{ 0x5513b7b5, "mdiobus_scan" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x58def6ca, "sfp_module_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xb093a6fd, "i2c_put_adapter" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x66b97421, "sfp_link_up" },
	{ 0x5eca6d17, "phy_device_free" },
	{ 0xe1b900a3, "phy_device_remove" },
	{ 0x6129fb93, "sfp_remove_phy" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xb6787346, "sfp_unregister_socket" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mdio-i2c");

MODULE_ALIAS("of:N*T*Csff,sff");
MODULE_ALIAS("of:N*T*Csff,sffC*");
MODULE_ALIAS("of:N*T*Csff,sfp");
MODULE_ALIAS("of:N*T*Csff,sfpC*");

MODULE_INFO(srcversion, "8C1719A53DC418A0F61CF35");
