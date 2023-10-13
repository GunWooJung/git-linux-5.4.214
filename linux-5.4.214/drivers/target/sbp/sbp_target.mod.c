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
	{ 0x2ce544af, "target_unregister_template" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0xda1fc8e1, "target_submit_cmd" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x2885fec5, "fw_get_request_speed" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf1d63e74, "target_setup_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe86fb5c7, "fw_card_release" },
	{ 0x3906f88e, "target_remove_session" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x85f487f5, "fw_send_response" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,firewire-core");


MODULE_INFO(srcversion, "13D9375CF8425D91370871D");
