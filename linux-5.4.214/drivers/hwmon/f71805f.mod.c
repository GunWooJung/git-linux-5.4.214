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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x46643670, "sysfs_chmod_file" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "34E5E626678D6E67856A9D7");
