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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x74a0134a, "mpt_device_driver_deregister" },
	{ 0x9e32efee, "mpt_event_register" },
	{ 0xf2d1bc1c, "mpt_reset_register" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0x35775925, "misc_deregister" },
	{ 0x7e50fed2, "mpt_register" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x2529205, "mpt_device_driver_register" },
	{ 0x46526b90, "mpt_HardResetHandler" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x9166fada, "strncpy" },
	{ 0xf37dd902, "mpt_alloc_fw_memory" },
	{ 0xe32237a8, "mpt_free_fw_memory" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x189ecc8c, "mpt_verify_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x754d539c, "strlen" },
	{ 0xe55b100e, "mpt_put_msg_frame" },
	{ 0xecf1c741, "mpt_GetIocState" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x44529937, "mpt_config" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xce5fd8d7, "mpt_halt_firmware" },
	{ 0x36a86c1d, "mpt_Soft_Hard_ResetHandler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x872731ea, "mpt_put_msg_frame_hi_pri" },
	{ 0x96ad65c8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3a0993f9, "mpt_send_handshake_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2279e87, "mpt_get_msg_frame" },
	{ 0x60332888, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xdd805159, "ioc_list" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x29361773, "complete" },
	{ 0x625e56ad, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xde793eab, "kill_fasync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "FD0EDD7A1D4E32B40E16283");
