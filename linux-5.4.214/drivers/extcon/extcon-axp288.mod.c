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
	{ 0xd6e68cfc, "device_connection_remove" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x76bf1480, "device_connection_add" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x23f5b3f1, "devm_extcon_register_notifier_all" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8e17faf3, "put_device" },
	{ 0x8b37e187, "extcon_get_extcon_dev" },
	{ 0x8fcb13eb, "acpi_dev_get_first_match_dev" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x87905dd6, "usb_role_switch_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xff42c374, "usb_role_switch_get_role" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x8d9c9375, "extcon_get_state" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_extcon");

MODULE_INFO(srcversion, "07B1C2D26E7F92D458E2C65");
