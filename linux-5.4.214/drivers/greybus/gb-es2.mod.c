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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa58e81d, "gb_hd_cport_release_reserved" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x28c2e85c, "usb_get_urb" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8cac0836, "greybus_data_rcvd" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x442541b, "__tracepoint_gb_message_submit" },
	{ 0x61b2cf56, "greybus_message_sent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x133ca8ce, "gb_hd_del" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x68edb8ca, "gb_debugfs_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe52163e1, "gb_hd_create" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf961a8ec, "gb_hd_add" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4222b469, "gb_hd_cport_reserve" },
	{ 0x85ae8254, "gb_hd_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "greybus");

MODULE_ALIAS("usb:v18D1p1EAFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3CDFB223E21AE67F77982E");
