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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5748356e, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcafebbff, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72f006c4, "atm_dev_deregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x4b358e06, "atm_dev_signal_change" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x44c12534, "atm_charge" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xad263612, "consume_skb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xd523d85d, "skb_push" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x754d539c, "strlen" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x80500894, "request_firmware" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x11089ac7, "_ctype" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");

MODULE_ALIAS("pci:v000010EEd00000300sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E1B5A29D38669973761FF1");
