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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x97d867c1, "usb_ftdi_elan_edset_single" },
	{ 0xf054aa87, "usb_ftdi_elan_edset_setup" },
	{ 0xc32c83b9, "usb_ftdi_elan_edset_flush" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x6eeca369, "usb_ftdi_elan_edset_output" },
	{ 0xd729dec3, "usb_ftdi_elan_edset_empty" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdec78ac5, "usb_ftdi_elan_edset_input" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa39d032f, "ftdi_elan_gone_away" },
	{ 0xb22b81f, "usb_hc_died" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xc5850110, "printk" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc3bf4fe2, "usb_ftdi_elan_write_pcimem" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x30ceb87a, "usb_ftdi_elan_read_pcimem" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ftdi-elan");


MODULE_INFO(srcversion, "E2595327C4177A544079E32");
