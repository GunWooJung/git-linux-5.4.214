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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x65a9c500, "ptp_schedule_worker" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89eba28e, "irq_to_desc" },
	{ 0x73b09748, "irq_domain_add_simple" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x83588f98, "kthread_queue_delayed_work" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x866515d9, "kthread_destroy_worker" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x93ad19fc, "devm_mdiobus_alloc_size" },
	{ 0xce8c1edb, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc01622c9, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd25948c6, "mdio_driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69acc757, "skb_complete_tx_timestamp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x825b9d0d, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4407d962, "mdiobus_write_nested" },
	{ 0xf7ed3c6b, "dsa_port_phylink_mac_change" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x21ec145d, "mdio_driver_register" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3fa0e928, "phylink_helper_basex_speed" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88bd11bb, "ptp_find_pin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0x7fce997a, "ptp_clock_index" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0x70c02408, "mdiobus_read_nested" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa8c30a43, "kthread_cancel_delayed_work_sync" },
	{ 0x20978fb9, "idr_find" },
	{ 0x5b5d48c1, "handle_level_irq" },
	{ 0x17b6aadc, "kthread_create_worker" },
	{ 0xd514771e, "irq_domain_xlate_twocell" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "dsa_core,phylink");

MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250C*");

MODULE_INFO(srcversion, "9CFF9F955B3BAFE63F291E4");
