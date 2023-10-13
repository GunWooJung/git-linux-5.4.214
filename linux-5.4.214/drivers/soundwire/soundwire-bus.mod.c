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
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7ee415d5, "single_open" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd0e78813, "dev_pm_domain_detach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0xb453ae86, "dev_pm_domain_attach" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D7EA0B23F353D4BB49F2040");
