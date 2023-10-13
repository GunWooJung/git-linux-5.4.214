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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x5748356e, "device_create_file" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b83a15e, "tty_port_tty_hangup" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001931d0000000Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42E0B52F65CE67F72B4361E");
