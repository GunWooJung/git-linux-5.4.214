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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2d84602c, "register_console" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x61178382, "tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xd238a319, "unregister_console" },
	{ 0x1f8785ad, "tty_wakeup" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "2897E962FA98AE9988F8B5E");
