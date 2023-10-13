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
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x29361773, "complete" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x960dee99, "debugfs_create_devm_seqfile" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:adf7242");
MODULE_ALIAS("spi:adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7242");
MODULE_ALIAS("of:N*T*Cadi,adf7242C*");
MODULE_ALIAS("of:N*T*Cadi,adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7241C*");

MODULE_INFO(srcversion, "16FDC169ACD3290C2F263F9");
