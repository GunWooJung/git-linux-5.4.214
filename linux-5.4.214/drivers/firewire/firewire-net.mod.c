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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x3888ac3d, "fw_send_request" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9255eff7, "fw_iso_context_start" },
	{ 0x95523e25, "fw_iso_context_queue_flush" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3a35e172, "fw_iso_buffer_destroy" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe3f0d416, "fw_iso_context_queue" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xfa2dfe94, "fw_iso_context_stop" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dd2ca1a, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xad263612, "consume_skb" },
	{ 0x47969e1d, "fw_iso_buffer_init" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x14472564, "fw_iso_context_destroy" },
	{ 0x85f487f5, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "84E6DF182A9AEA0C2E057E8");
