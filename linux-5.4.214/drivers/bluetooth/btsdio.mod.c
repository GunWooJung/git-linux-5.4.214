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
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xd523d85d, "skb_push" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "58398886812F0B4CE9E4672");
