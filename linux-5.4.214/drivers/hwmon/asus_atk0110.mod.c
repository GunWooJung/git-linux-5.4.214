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
	{ 0x3f556282, "simple_attr_release" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "1CD208372FDA54408BCDDD4");
