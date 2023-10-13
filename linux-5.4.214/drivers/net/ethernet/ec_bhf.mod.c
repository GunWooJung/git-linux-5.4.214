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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x35a218ab, "param_ops_long" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc5534d64, "ioread16" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xad263612, "consume_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xace59822, "skb_copy_and_csum_dev" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ECd00005000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2178A8BEEE9DFC001A1D851");
