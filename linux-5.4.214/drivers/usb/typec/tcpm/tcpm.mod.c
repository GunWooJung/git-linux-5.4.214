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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7ee415d5, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa0d7a8f6, "usb_debug_root" },
	{ 0xa084b406, "typec_match_altmode" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x64049638, "typec_altmode_notify" },
	{ 0x493159cc, "typec_partner_set_identity" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf1b229c3, "typec_unregister_altmode" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x849c8990, "typec_register_port" },
	{ 0x2d1e301d, "typec_find_power_role" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xca5f146a, "typec_altmode_vdm" },
	{ 0x9049491e, "typec_find_port_data_role" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0xc96263da, "typec_altmode_attention" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x5ac3a632, "typec_set_vconn_role" },
	{ 0x7f5d4f6a, "typec_altmode_update_active" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x36852716, "typec_set_orientation" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb7497fa, "typec_partner_register_altmode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x54c93810, "typec_set_mode" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0xeafc1eb8, "typec_find_port_power_role" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3c55962, "typec_port_register_altmode" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x87905dd6, "usb_role_switch_get" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xceb66bec, "sched_clock_cpu" },
};

MODULE_INFO(depends, "typec");


MODULE_INFO(srcversion, "07D273E60031BF7A0F9968F");
