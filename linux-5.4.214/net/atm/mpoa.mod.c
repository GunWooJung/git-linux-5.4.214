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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7dedaa1b, "vcc_insert_socket" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf13e34, "seq_open" },
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xdd0010c3, "vcc_release_async" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x63616516, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd523d85d, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x272147fe, "softnet_data" },
	{ 0x721c9d1f, "init_net" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6f395e65, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x43fbceea, "seq_release" },
	{ 0x960650ec, "proc_create" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf8595510, "_raw_read_lock_irq" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B6CC3D178A911F20B95826E");
