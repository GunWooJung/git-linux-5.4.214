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
	{ 0x541932b5, "kernel_write" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x53b954a2, "up_read" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0x11c536c6, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x94816c92, "usb_ep_set_wedge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb3051965, "config_item_put" },
	{ 0x4fc50396, "file_path" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd92b5797, "vfs_fsync" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9371479e, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x63e14d80, "usb_ep_clear_halt" },
	{ 0xce807a25, "up_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xca669996, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x705b04bd, "usb_composite_setup_continue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xb38d8e2, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7317aa0a, "invalidate_mapping_pages" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5591473d, "usb_ep_fifo_flush" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdd887c35, "filp_open" },
};

MODULE_INFO(depends, "libcomposite,udc-core");


MODULE_INFO(srcversion, "B17335AAA7B4ACD8F0BE8AA");
