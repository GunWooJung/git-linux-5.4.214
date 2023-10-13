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
	{ 0x268455cd, "hdlc_start_xmit" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xad263612, "consume_skb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1f0d9e2e, "alloc_hdlcdev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x45dd1680, "hdlc_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x66f66267, "hdlc_ioctl" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xcc3b3c0d, "hdlc_close" },
	{ 0x23a77175, "napi_disable" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x290d4804, "unregister_hdlc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003196bc*sc*i*");

MODULE_INFO(srcversion, "CFF10CB64DC2E0A9E0E8AE9");
