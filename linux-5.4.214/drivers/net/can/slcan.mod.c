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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x61178382, "tty_hangup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5561600b, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0x24f106a9, "tty_mode_ioctl" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CC6580337451524CA2CB13D");
