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
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa820caf, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3a853a18, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0xde47d450, "iscsi_itt_to_ctask" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xc5767302, "skb_abort_seq_read" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6873ddc2, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xaf9b0ece, "iscsi_conn_teardown" },
	{ 0x542dfa62, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbe5a043d, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf241a08f, "iscsi_complete_pdu" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2383c145, "iscsi_dbg_trace" },
	{ 0x972cc0f, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x47867762, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x534646f3, "iscsi_verify_itt" },
	{ 0xbac1dbb6, "iscsi_conn_setup" },
	{ 0xdfebd419, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi,scsi_transport_iscsi");


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");
