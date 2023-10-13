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
	{ 0x765395c3, "param_ops_int" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");

MODULE_INFO(srcversion, "6D76D1E905A75D8EB65BD89");
