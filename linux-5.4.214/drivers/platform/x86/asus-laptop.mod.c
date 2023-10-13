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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xab03b9eb, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x66c54ff1, "input_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,sparse-keymap,video");

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "99F250EC9C5B33B774C621D");
