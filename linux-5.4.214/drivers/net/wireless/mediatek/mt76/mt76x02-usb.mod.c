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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x128739ac, "mt76x02_mac_set_beacon" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x49e000be, "mt76u_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x815a363f, "mt76_tx_complete_skb" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xc3490e0e, "mt76x02_mac_write_txwi" },
	{ 0xed82026d, "mt76x02_init_beacon_config" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x10ac9f98, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x122e9152, "mt76_tx_status_skb_add" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x96ffca3c, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe4a77a9a, "mt76x02_resync_beacon_timer" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xe7221fec, "mt76x02_remove_hdr_pad" },
	{ 0x3c66d246, "mt76x02_enqueue_buffered_bc" },
	{ 0x33e22f3a, "ieee80211_iterate_interfaces" },
	{ 0xc3bb917e, "mt76x02_update_beacon_iter" },
	{ 0xc977aafa, "__skb_pad" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76-usb,mt76,cfg80211,mac80211");


MODULE_INFO(srcversion, "4C7C164B9C2DC3AC3011134");
