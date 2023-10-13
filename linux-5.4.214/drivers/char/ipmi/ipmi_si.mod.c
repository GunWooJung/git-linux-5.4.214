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
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x530e0df7, "device_add_groups" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0xe8516149, "platform_get_irq_optional" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4016b03e, "platform_bus_type" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xca2ca1f5, "device_property_read_u8_array" },
	{ 0x7add3d63, "bus_find_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6bb4d681, "ipmi_platform_add" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0x670c8ac6, "ipmi_add_smi" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e17faf3, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd80477bf, "device_remove_groups" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xeae5711f, "set_user_nice" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("acpi*:IPI0001:*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");

MODULE_INFO(srcversion, "889CFB0C2347D5C08B15E0E");
