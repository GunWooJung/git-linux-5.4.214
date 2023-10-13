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
	{ 0xf5723a94, "iw_handler_set_thrspy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa7264a47, "proc_set_user" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x132d1553, "make_kgid" },
	{ 0xc42fd9fe, "wireless_spy_update" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc2448345, "default_llseek" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xa571ddec, "iw_handler_get_spy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x652032cb, "mac_pton" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x796f8ca1, "iw_handler_get_thrspy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x568df3c3, "iw_handler_set_spy" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc85c13f6, "proc_mkdir_mode" },
	{ 0xcf2a6966, "up" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xad263612, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("pci:v000014B9d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d0000A504sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA92A5E1192C2D6F0FB835D");
