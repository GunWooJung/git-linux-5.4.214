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
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xb814e18a, "on_each_cpu_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f819a4f, "pci_bus_write_config_dword" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001584sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3ED0CFFA01BA7F6957AF6BF");
