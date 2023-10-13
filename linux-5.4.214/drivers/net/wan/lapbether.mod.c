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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xcb952cbb, "lapb_data_received" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xad263612, "consume_skb" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x7b4f6f72, "lapb_connect_request" },
	{ 0x345a7140, "lapb_disconnect_request" },
	{ 0xbe123b53, "lapb_data_request" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x5561600b, "dev_close" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x721c9d1f, "init_net" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbdf07935, "lapb_register" },
	{ 0xc5850110, "printk" },
	{ 0xfc478d6e, "lapb_unregister" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lapb");


MODULE_INFO(srcversion, "89DFA29934434B65E8982DB");
