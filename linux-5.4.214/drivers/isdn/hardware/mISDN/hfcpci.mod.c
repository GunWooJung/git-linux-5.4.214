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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x44f8bfa7, "bchannel_senddata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x54068122, "create_l1" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xadcde5b0, "recv_Dchannel" },
	{ 0x983edcc, "get_next_dframe" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfd6490d5, "bchannel_get_rxbuf" },
	{ 0x4d9bc51c, "recv_Bchannel" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xb23a5d90, "queue_ch_frame" },
	{ 0x150a5ddb, "dchannel_senddata" },
	{ 0x5b70e77a, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbd1ca3bd, "mISDN_initbchannel" },
	{ 0x2012c4cc, "mISDN_initdchannel" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x588886a6, "l1_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5fcc0cb, "mISDN_freedchannel" },
	{ 0x213cb3a2, "mISDN_freebchannel" },
	{ 0xa4217a75, "mISDN_unregister_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x92a18466, "get_next_bframe" },
	{ 0xad263612, "consume_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xace985a7, "mISDN_ctrl_bchannel" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d0cca9, "mISDN_clear_bchannel" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A03CA639E9B726C79E48CD0");
