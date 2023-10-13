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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa9b1ac8, "rio_unregister_mport" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x90acfe2d, "rio_mport_initialize" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x9975aa20, "rio_register_mport" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1d04ccdb, "rio_inb_pwrite_handler" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000111Dd000080ABsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "858E07EDFB4EBFE9858514E");
