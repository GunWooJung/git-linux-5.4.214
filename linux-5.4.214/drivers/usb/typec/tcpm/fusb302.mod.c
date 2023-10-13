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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x12a38747, "usleep_range" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe11160f1, "fwnode_create_software_node" },
	{ 0x8b37e187, "extcon_get_extcon_dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8650673e, "tcpm_register_port" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7ee415d5, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xa0d7a8f6, "usb_debug_root" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d9c9375, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:typec_fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302C*");

MODULE_INFO(srcversion, "78B83B10B2C31D29DC422B3");
