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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x92a18466, "get_next_bframe" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4d9bc51c, "recv_Bchannel" },
	{ 0xfd6490d5, "bchannel_get_rxbuf" },
	{ 0xb23a5d90, "queue_ch_frame" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xadcde5b0, "recv_Dchannel" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xace985a7, "mISDN_ctrl_bchannel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf7d0cca9, "mISDN_clear_bchannel" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x983edcc, "get_next_dframe" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x150a5ddb, "dchannel_senddata" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbd1ca3bd, "mISDN_initbchannel" },
	{ 0x44f8bfa7, "bchannel_senddata" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x588886a6, "l1_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2012c4cc, "mISDN_initdchannel" },
	{ 0xad263612, "consume_skb" },
	{ 0xa5fcc0cb, "mISDN_freedchannel" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x54068122, "create_l1" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "84478D5F6A23516580FB4F1");
