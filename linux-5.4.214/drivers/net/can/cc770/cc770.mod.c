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
	{ 0x765395c3, "param_ops_int" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8acc823e, "close_candev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x44e7928f, "open_candev" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "C049D9E7C24A4EEC2F5FD32");
