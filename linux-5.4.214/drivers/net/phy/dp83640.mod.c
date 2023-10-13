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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x2013cb4d, "phy_driver_unregister" },
	{ 0x8e17faf3, "put_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xddb279a2, "phy_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x88bd11bb, "ptp_find_pin" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd5e2ee54, "dev_mc_del" },
	{ 0x865f6311, "dev_mc_add" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x69acc757, "skb_complete_tx_timestamp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc01622c9, "ptp_clock_event" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "110ADE3AB0661924CA2127F");
