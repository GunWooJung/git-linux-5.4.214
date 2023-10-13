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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x26236de8, "mISDN_clock_update" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb2b9440, "recv_Bchannel_skb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x54068122, "create_l1" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc3401729, "mISDN_register_clock" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5b70e77a, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbd1ca3bd, "mISDN_initbchannel" },
	{ 0x2012c4cc, "mISDN_initdchannel" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe8f617eb, "mISDN_unregister_clock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa4217a75, "mISDN_unregister_device" },
	{ 0xa5fcc0cb, "mISDN_freedchannel" },
	{ 0x37a0cba, "kfree" },
	{ 0x213cb3a2, "mISDN_freebchannel" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb23a5d90, "queue_ch_frame" },
	{ 0x150a5ddb, "dchannel_senddata" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x588886a6, "l1_event" },
	{ 0x44f8bfa7, "bchannel_senddata" },
	{ 0xace985a7, "mISDN_ctrl_bchannel" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xf7d0cca9, "mISDN_clear_bchannel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xadcde5b0, "recv_Dchannel" },
	{ 0x4d9bc51c, "recv_Bchannel" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfd6490d5, "bchannel_get_rxbuf" },
	{ 0x8479487e, "recv_Dchannel_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x983edcc, "get_next_dframe" },
	{ 0x92a18466, "get_next_bframe" },
	{ 0xad263612, "consume_skb" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B567bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B566bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B569bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B560bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B568bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B620bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d0000B410sv0000D161sd0000B410bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B540bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd00001234bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E888bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E884bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B761bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B762bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B562bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B56Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B552bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B622bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000E998bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B55Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B563bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B56Abc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B565bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B564bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd000030B1bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B523bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000C523bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003136bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003137bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B553bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BD03E8F03E200586FFDE03C");
