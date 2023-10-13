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
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xcb952cbb, "lapb_data_received" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd523d85d, "skb_push" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x675dcd63, "attach_hdlc_protocol" },
	{ 0xc6cbbc89, "capable" },
	{ 0x345a7140, "lapb_disconnect_request" },
	{ 0xbe123b53, "lapb_data_request" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x7b4f6f72, "lapb_connect_request" },
	{ 0xad263612, "consume_skb" },
	{ 0x216cc777, "netdev_err" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x6a23674b, "dev_queue_xmit_nit" },
	{ 0xbe24ea6b, "dev_nit_active" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdf07935, "lapb_register" },
	{ 0xfc478d6e, "lapb_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc,lapb");


MODULE_INFO(srcversion, "263405533C578E957FAE507");
