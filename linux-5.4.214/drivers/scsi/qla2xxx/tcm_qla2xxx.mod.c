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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2ce544af, "target_unregister_template" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0xa6f88a75, "qlt_rdy_to_xfer" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xb5e8a191, "qlt_lport_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc8080b5a, "qlt_unreg_sess" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3906f88e, "target_remove_session" },
	{ 0x7f8a9579, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf1d63e74, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0xbe653485, "qlt_xmit_response" },
	{ 0xda1fc8e1, "target_submit_cmd" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0xfdcdfe32, "transport_generic_request_failure" },
	{ 0xa28b74ad, "target_submit_tmr" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0xdbc27c5, "qlt_lport_deregister" },
	{ 0x21b2e7f4, "target_show_dynamic_sessions" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0xec94a894, "qlt_free_mcmd" },
	{ 0xd7195e2e, "qlt_free_cmd" },
	{ 0xdb554a6b, "target_sess_cmd_list_set_waiting" },
	{ 0x7c9c868e, "qlt_xmit_tm_rsp" },
	{ 0x60d61322, "qlt_abort_cmd" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0x9643decf, "fc_vport_create" },
	{ 0x568d721e, "fc_vport_terminate" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x580febab, "qlt_stop_phase2" },
	{ 0xf0e6b498, "qlt_stop_phase1" },
	{ 0xdb3f89dd, "qlt_enable_vha" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,qla2xxx,scsi_transport_fc");


MODULE_INFO(srcversion, "220A39428C8E4536DA62955");
