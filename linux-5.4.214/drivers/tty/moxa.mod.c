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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xcfcc78f6, "tty_port_link_device" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x3d63e7c0, "tty_prepare_flip_string" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x80500894, "request_firmware" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5e8e0b9b, "tty_port_block_til_ready" },
	{ 0x46ce58c, "tty_port_tty_set" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b83a15e, "tty_port_tty_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00002180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00003200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00002040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "128B0533CD3A0BA3B87A353");
