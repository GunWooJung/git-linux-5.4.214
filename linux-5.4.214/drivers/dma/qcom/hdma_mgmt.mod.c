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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1cd6f316, "param_ops_uint" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-mgmt-1.0C*");
MODULE_ALIAS("acpi*:QCOM8060:*");

MODULE_INFO(srcversion, "5758466E445B447DDAD365A");
