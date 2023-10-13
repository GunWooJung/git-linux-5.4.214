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
	{ 0x5327bc40, "unregister_hdlc_protocol" },
	{ 0xb7a88cf6, "register_hdlc_protocol" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x675dcd63, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5561600b, "dev_close" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xfb578fc5, "memset" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd523d85d, "skb_push" },
	{ 0xad263612, "consume_skb" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "D262758363396E4FB17757B");
