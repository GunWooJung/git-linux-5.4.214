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
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7405b58d, "pci_enable_sriov" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6ffe62f4, "crypto_unregister_skciphers" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e922c28, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9922f9f9, "pci_disable_sriov" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x28d6d258, "crypto_register_skciphers" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9166fada, "strncpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xeaf3053d, "pcie_flr" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8480389a, "pcie_has_flr" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ef8788f, "crypto_unregister_aeads" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xeedc6fb0, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x908fec57, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x80500894, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7a4497db, "kzfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3731ea78, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0xc99ba38a, "pci_msix_vec_count" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000177Dd00000012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ED45ECF3E9DCB306632C7A2");
