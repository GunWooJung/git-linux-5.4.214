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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xa916b694, "strnlen" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0x904a8908, "regmap_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4b5489c1, "spi_async" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf99a4bed, "ieee802154_wake_queue" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x7ee415d5, "single_open" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x29361773, "complete" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "56FB20BBB906E216F10FDB4");
