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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x349cba85, "strchr" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x23a77175, "napi_disable" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xad263612, "consume_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB82AB0D85916B1FC3757D0");
