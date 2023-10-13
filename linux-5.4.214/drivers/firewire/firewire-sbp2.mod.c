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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x488ab16c, "fw_device_enable_phys_dma" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xdca3be20, "__scsi_add_device" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x3888ac3d, "fw_send_request" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3c56ef91, "fw_workqueue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xf6ea5343, "blk_queue_update_dma_alignment" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x4486e9b3, "fw_cancel_transaction" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0x85f487f5, "fw_send_response" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");

MODULE_INFO(srcversion, "26DA6D2C6F73F67D5EACF34");
