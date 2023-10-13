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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0xc5850110, "printk" },
	{ 0x4429c2ce, "ax25_ip_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x5561600b, "dev_close" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xad263612, "consume_skb" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x63616516, "netif_rx" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x721c9d1f, "init_net" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xfeecd8f7, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E466A10726C58CAE0A8451C");
