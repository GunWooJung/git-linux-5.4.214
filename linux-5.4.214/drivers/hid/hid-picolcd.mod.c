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
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7ee415d5, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x8b7b68bf, "framebuffer_release" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xa6334991, "fb_sys_read" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc6854343, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xb77d54c9, "sys_copyarea" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xa2c34977, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x7761bd3b, "register_framebuffer" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6767285f, "lcd_device_unregister" },
	{ 0x4884afcb, "hid_set_field" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x13dd8367, "hid_alloc_report_buf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x90b152c8, "sys_fillrect" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x7a545545, "sys_imageblit" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x9ea17a36, "fb_sys_write" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x259bbf30, "framebuffer_alloc" },
	{ 0xf9d4cba7, "fb_deferred_io_cleanup" },
	{ 0x4b958150, "fb_deferred_io_init" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x32fe51bf, "lcd_device_register" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1ee21375, "hid_output_report" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xfe00f05c, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core,hid,fb_sys_fops,syscopyarea,lcd,sysfillrect,sysimgblt");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "5F455E22A5E71CBBE55724D");
