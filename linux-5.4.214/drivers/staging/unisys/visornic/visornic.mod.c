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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb1bfe568, "visorbus_enable_channel_interrupts" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe338292, "visorchannel_signalempty" },
	{ 0x9df38c59, "visorbus_write_channel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4de03230, "visorchannel_signalinsert" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x56401853, "visorchannel_signalremove" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xba190241, "visorbus_read_channel" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe677827a, "skb_unlink" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x5561600b, "dev_close" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x62aa6169, "dev_open" },
	{ 0x90c87fa8, "visorbus_register_visor_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x3c5d4a97, "visorbus_unregister_visor_driver" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "visorbus");


MODULE_INFO(srcversion, "94F28421CAD1E36E77645A8");
