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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hwmon-vid");


MODULE_INFO(srcversion, "3110631AB0DC79320487169");
