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
	{ 0xeb1919a4, "netdev_info" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x8acc823e, "close_candev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0x176c3eb9, "can_change_state" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x44e7928f, "open_candev" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x4778268d, "can_free_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "D09B04319C3462B7851D991");
