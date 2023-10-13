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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x675dcd63, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "E5FBE9888C56045BD3F093C");
