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
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x44e7928f, "open_candev" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x8acc823e, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x216cc777, "netdev_err" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x3795f377, "alloc_canfd_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cifi,canfd-1.0");
MODULE_ALIAS("of:N*T*Cifi,canfd-1.0C*");

MODULE_INFO(srcversion, "C4115A1A2C0DB4D58E9C3EA");
