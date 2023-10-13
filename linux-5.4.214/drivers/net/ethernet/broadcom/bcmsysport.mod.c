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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x5fd2de91, "phy_start" },
	{ 0xd15763f7, "phy_resume" },
	{ 0xad263612, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x909f6f2d, "phy_suspend" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x23a77175, "napi_disable" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x5c5bb8ee, "unregister_dsa_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport");
MODULE_ALIAS("of:N*T*Cbrcm,systemportC*");

MODULE_INFO(srcversion, "DA80505D31B174C3209854E");
