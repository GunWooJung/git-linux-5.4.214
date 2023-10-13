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
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7ee415d5, "single_open" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5748356e, "device_create_file" },
	{ 0x6b9fcc05, "dma_run_dependencies" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x73745d80, "platform_msi_domain_alloc_irqs" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9120aa78, "platform_msi_domain_free_irqs" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.0C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.1C*");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2");
MODULE_ALIAS("of:N*T*Cqcom,hidma-1.2C*");
MODULE_ALIAS("acpi*:QCOM8061:*");
MODULE_ALIAS("acpi*:QCOM8062:*");
MODULE_ALIAS("acpi*:QCOM8063:*");

MODULE_INFO(srcversion, "7D68B3D7F139D0494F78C00");
