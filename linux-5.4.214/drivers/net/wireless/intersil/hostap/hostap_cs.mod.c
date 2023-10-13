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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x4a2b4aef, "seq_release_private" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x13abdd5a, "hostap_dump_tx_header" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbe555bed, "hostap_check_sta_fw_version" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd64f107f, "hostap_init_ap_proc" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0xde7d4489, "hostap_init_proc" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc7a16dbc, "hostap_add_interface" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0xb3fefbe4, "hostap_init_data" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x56033953, "hostap_80211_ops" },
	{ 0xcf0ead3b, "hostap_setup_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x41535a31, "lib80211_crypt_info_init" },
	{ 0xbef2ba1d, "hostap_info_init" },
	{ 0x75934c58, "hostap_set_multicast_list_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x1381e76d, "hostap_get_porttype" },
	{ 0x8fe07f4b, "hostap_set_auth_algs" },
	{ 0xa1065b7a, "hostap_set_roaming" },
	{ 0xe3f83130, "hostap_set_encryption" },
	{ 0xe02482fb, "hostap_set_string" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x79d4a868, "hostap_set_antsel" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x56e6858a, "hostap_remove_interface" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xaae82797, "hostap_set_hostapd_sta" },
	{ 0x3f43d3f0, "hostap_set_hostapd" },
	{ 0xda7974be, "hostap_remove_proc" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xb6b25efb, "hostap_free_data" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc48ad170, "lib80211_crypt_info_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2d2e8ee8, "seq_write" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0xe1a5fbfa, "seq_open_private" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb0c0ac37, "prism2_update_comms_qual" },
	{ 0x51ea1663, "hostap_info_process" },
	{ 0x7fb75891, "hostap_dump_rx_header" },
	{ 0x1c46916d, "hostap_80211_rx" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xad263612, "consume_skb" },
	{ 0x591556e3, "hostap_handle_sta_tx_exc" },
	{ 0xb0e602eb, "memmove" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb4b77c8b, "hostap_80211_get_hdrlen" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe9405a3, "pcmcia_read_config_byte" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xd5b625f, "pcmcia_write_config_byte" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x5732bf64, "hostap_set_word" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x760a0f4f, "yield" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "pcmcia,hostap,lib80211");

MODULE_ALIAS("pcmcia:m000Bc7100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m000Bc7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0777f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c8000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc3301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc030Bf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1612f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1613f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m028Ac0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02AAc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mC250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0010f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa2D858104pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa74C5E40Dpb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa4B801A17pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa*pb*pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa7A954BD9pb74BE00C6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE6EC52CEpb08649AF2pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96EF6FE2pb263FCBABpcA57ADB8Cpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa71B18589pbB6F1B0ABpc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11D901AFpb6E9BD926pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb474A1F2Apc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2DECECE3pb82067C18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb15A75E5Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa74C5E40DpbDB472A18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb0C52F395pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa273FE3DBpb32A1EAEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA37434E9pb9762E8F1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1CADD3E5pbE697636Cpc7A5BFCF1pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC7B8DF9Dpb1700D087pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD01705pb4271660Fpc9D08EE12pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B8870FFpb70E946D1pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc355CB092pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc630D52B2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcDD97A26Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcC9049A39pd*");

MODULE_INFO(srcversion, "57284600A909F8BD13AA9D9");
