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
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2ce544af, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xdc274b8f, "bus_register" },
	{ 0xfaa8197e, "__root_device_register" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf1d63e74, "target_setup_session" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x754d539c, "strlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4ff518e, "root_device_unregister" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe128fdfc, "target_submit_cmd_map_sgls" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa28b74ad, "target_submit_tmr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3906f88e, "target_remove_session" },
	{ 0x1a1c41d9, "core_allocate_nexus_loss_ua" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "D46B5163B23E91745F8E9FD");
