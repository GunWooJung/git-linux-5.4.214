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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3888ac3d, "fw_send_request" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xcd8722aa, "tty_buffer_space_avail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0xc5850110, "printk" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3885862f, "seq_putc" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x29c20bb3, "tty_buffer_set_limit" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0x85f487f5, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp00D00D1Ever0000E81C*");

MODULE_INFO(srcversion, "125D9FAA1A97BB1AD2BC602");
