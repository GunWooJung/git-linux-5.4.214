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
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x339a5a9a, "pci_free_irq_vectors" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd65aa48f, "ibdev_err" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfdcaf3d3, "rdma_user_mmap_io" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdb2b05ca, "ibdev_info" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x6626afca, "down" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x67477f2c, "vm_insert_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5679c54, "__dynamic_ibdev_dbg" },
	{ 0xb95c08ab, "ib_umem_find_best_pgsz" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xcf2a6966, "up" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x39d07ab1, "devm_iounmap" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x731cdee3, "pci_release_selected_regions" },
	{ 0x2ca6d6fe, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v00001D0Fd0000EFA0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "56045461A366C9D74FF0DFD");
