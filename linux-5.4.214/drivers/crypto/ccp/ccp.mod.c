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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x1759cd61, "device_get_dma_attr" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x6b9fcc05, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x599074f3, "firmware_request_nowarn" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x35775925, "misc_deregister" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "FBFA437BCFA5A99805D3FAF");
