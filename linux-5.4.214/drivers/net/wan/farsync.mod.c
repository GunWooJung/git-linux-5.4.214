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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x268455cd, "hdlc_start_xmit" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x1f0d9e2e, "alloc_hdlcdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x45dd1680, "hdlc_open" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xcc3b3c0d, "hdlc_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x66f66267, "hdlc_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x63616516, "netif_rx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc5850110, "printk" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xad263612, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x290d4804, "unregister_hdlc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001619d00000400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001619d00001612sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BE315FBBE7E8546737DEA2C");
