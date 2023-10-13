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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xeacd037, "ieee802154_hdr_peek_addrs" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xf99a4bed, "ieee802154_wake_queue" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf6e20007, "ieee802154_hdr_push" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0xb44f5231, "clk_register_fixed_rate" },
	{ 0x215c2d10, "gpiod_unexport" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3f1c46fa, "debugfs_create_symlink" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x29361773, "complete" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4b5489c1, "spi_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ieee802154,mac802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "1A1106A49D33754D528B453");
