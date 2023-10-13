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
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00003057sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "925E5812259AA6CBDFCF8DE");
