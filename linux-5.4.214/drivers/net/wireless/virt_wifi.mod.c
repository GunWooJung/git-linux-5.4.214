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
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3ef6e429, "netdev_upper_dev_unlink" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0x75ad7f34, "cfg80211_inform_bss_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0x6f395e65, "__module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1d0ba5ee, "netdev_upper_dev_link" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbc01d2a0, "netif_stacked_transfer_operstate" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0xe4bf5722, "__dev_get_by_index" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "EF0D7F67EDA7277C6E677F9");
