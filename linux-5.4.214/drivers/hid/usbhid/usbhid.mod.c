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
	{ 0x1c89a710, "hid_add_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2757c65b, "hid_parse_report" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfbd49ef6, "input_ff_create" },
	{ 0xc6854343, "__hid_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495392, "hid_debug" },
	{ 0xa6ec525f, "hid_input_report" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x675f9aad, "usb_block_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4c448223, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x3a5e48cf, "usb_autopm_put_interface_async" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8249b0a5, "usb_unpoison_urb" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x253147d6, "hid_check_keys_pressed" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4884afcb, "hid_set_field" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x13dd8367, "hid_alloc_report_buf" },
	{ 0x79a4c965, "usb_queue_reset_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf32be640, "usb_autopm_get_interface_async" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee13453, "usb_find_interface" },
	{ 0x75dd0647, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc0db57d8, "hid_destroy_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x20415a21, "hid_allocate_device" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd8749720, "usb_autopm_get_interface_no_resume" },
	{ 0x55013fa0, "usb_autopm_put_interface_no_suspend" },
	{ 0x9300552e, "hidinput_count_leds" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xcf2a6966, "up" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x503beab4, "hid_lookup_quirk" },
	{ 0x1ee21375, "hid_output_report" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "6EBF9957776CB64F748827B");
