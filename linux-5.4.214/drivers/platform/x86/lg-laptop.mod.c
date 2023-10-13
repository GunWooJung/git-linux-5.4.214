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
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6c957d74, "sparse_keymap_report_entry" },
	{ 0xb754a627, "sparse_keymap_entry_from_scancode" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");

MODULE_ALIAS("acpi*:LGEX0815:*");

MODULE_INFO(srcversion, "1FFFFEC007ACEDDD77889AB");
