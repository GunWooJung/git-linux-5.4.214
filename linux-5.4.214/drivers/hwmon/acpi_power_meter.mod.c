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
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9166fada, "strncpy" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5748356e, "device_create_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e17faf3, "put_device" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000D:*");

MODULE_INFO(srcversion, "BADC79C9C252224E3DA0239");
