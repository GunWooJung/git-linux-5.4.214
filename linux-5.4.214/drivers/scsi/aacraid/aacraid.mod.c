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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0xf47ea6e8, "scsi_bios_ptable" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x70ad0c76, "pci_enable_pcie_error_reporting" },
	{ 0xacc03556, "scsi_rescan_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xed8da4e6, "scsi_device_set_state" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3eb71684, "pci_disable_pcie_error_reporting" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x9ac395e0, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001028d00000001sv00001028sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000003sv00001028sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000004sv00001028sd000000D0bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D1bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000002sv00001028sd000000D9bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000106bc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd0000011Bbc*sc*i*");
MODULE_ALIAS("pci:v00001028d0000000Asv00001028sd00000121bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000283sv00009005sd00000283bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000284sv00009005sd00000284bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000285bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000286bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000288bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000289bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Bbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Cbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd0000029Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A0bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A3bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A4bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd000002A5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A6bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000287sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000200sv00009005sd00000200bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Ebc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000028Fbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000290bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000291bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000292bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000293bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000294bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv0000103Csd00003227bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000296bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000297bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd000002F2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001014sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00001014sd00009540bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000298bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd00000299bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00009005sd0000029Abc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv00009005sd000002A2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd00000287bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000365bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00000364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv00009005sd00001364bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000046sv0000103Csd000010C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv00001028sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv000017AAsd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000285sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000028Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "822369EE6716B4EC96440E7");
