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
	{ 0xa3ea868f, "ieee80211_rx_napi" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfc745fa8, "ssb_dma_translation" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0b98eba, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x5071eb4c, "bcma_host_pci_down" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x1474ebc5, "ieee80211_rts_get" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe16e9f1f, "ssb_commit_settings" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8c17f24b, "ssb_bus_powerup" },
	{ 0x2dd204e5, "bcma_host_pci_up" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3d641f42, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x17324e49, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x95937efe, "__ssb_driver_register" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xbb9e269f, "ssb_driver_unregister" },
	{ 0x59aea7d7, "ssb_chipco_gpio_control" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x3eadd2e3, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x34cef882, "ssb_device_enable" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xecba9e8e, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2c79c6e1, "__bcma_driver_register" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xca1944d9, "ieee80211_ctstoself_get" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x5748356e, "device_create_file" },
	{ 0x8fa068b2, "bcma_host_pci_irq_ctl" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9869bf73, "bcma_chipco_gpio_control" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x60ac3ed8, "__ieee80211_get_rx_led_name" },
	{ 0xf4fa3f73, "bcma_core_is_enabled" },
	{ 0x31a1a0a9, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a7aab6, "ssb_device_disable" },
	{ 0xec3748a7, "bcma_core_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa668a725, "bcma_driver_unregister" },
	{ 0x902c41f8, "bcma_core_pll_ctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xaf8c5b24, "__ieee80211_get_tx_led_name" },
	{ 0xd0d9ad2e, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0x270d6cc6, "ieee80211_generic_frame_duration" },
	{ 0x45e8d1c2, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x80500894, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xe6748ad1, "ssb_bus_may_powerdown" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x173b1bf4, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xad263612, "consume_skb" },
	{ 0x830dd22b, "ssb_pmu_set_ldo_paref" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x321233ec, "ssb_device_is_enabled" },
	{ 0xbfd894ae, "bcma_core_disable" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9541903c, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "147A2FCC84187DA59D91C5C");
