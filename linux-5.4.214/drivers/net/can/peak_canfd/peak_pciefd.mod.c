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
	{ 0xfdeb1a62, "register_candev" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x63616516, "netif_rx" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8acc823e, "close_candev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0x176c3eb9, "can_change_state" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x44e7928f, "open_candev" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3795f377, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v0000001Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000001Cd0000001Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "71094D9B598519DF528DBC2");
