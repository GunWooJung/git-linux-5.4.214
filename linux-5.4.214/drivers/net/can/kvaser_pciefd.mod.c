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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x3795f377, "alloc_canfd_skb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x29361773, "complete" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x63616516, "netif_rx" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x44e7928f, "open_candev" },
	{ 0x8acc823e, "close_candev" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x216cc777, "netdev_err" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51bd55b5, "completion_done" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x176c3eb9, "can_change_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("pci:v00001A07d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A07d00000011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "662793CD9DA9F36137FBDAD");
