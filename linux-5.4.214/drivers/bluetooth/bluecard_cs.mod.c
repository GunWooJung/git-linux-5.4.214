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
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd523d85d, "skb_push" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,bluetooth");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBAF16FBFpb657CC15Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE3987764pb2524B59Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0A0736ECpb24E6DFABpc*pd*");

MODULE_INFO(srcversion, "34A761266B261211BE921B8");
