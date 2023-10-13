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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd25286f2, "rapl_add_package" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x797a0345, "thermal_zone_device_update" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xb23b6c46, "intel_soc_dts_iosf_init" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x24ab4ecd, "powercap_register_control_type" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x74e510fc, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa91ba10c, "rapl_find_package_domain" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd0309a07, "int340x_thermal_zone_add" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x45422a4b, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8f152407, "powercap_unregister_control_type" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0xfefc13c7, "intel_soc_dts_iosf_exit" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0x71977c66, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_rapl_common,intel_soc_dts_iosf,int340x_thermal_zone");

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008A03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D06F45EDBCF701BF08AA67D");
