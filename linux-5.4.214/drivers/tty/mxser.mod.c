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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x85bd1608, "__request_region" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5335c503, "do_SAK" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0xbc4bd4c1, "tty_port_lower_dtr_rts" },
	{ 0x46ce58c, "tty_port_tty_set" },
	{ 0x54c7c28a, "tty_port_close_end" },
	{ 0x91402c35, "tty_port_close_start" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x52abd340, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x1f8785ad, "tty_wakeup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001141sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001181sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001142sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001120sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "629A9891CF2BFCB1059DD39");
