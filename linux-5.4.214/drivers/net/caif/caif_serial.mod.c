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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xf9b43280, "debugfs_create_x8" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0xef80c44, "debugfs_create_blob" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x5561600b, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x68202a45, "tty_write_room" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BFCEFB65C094DF35ED144A3");
