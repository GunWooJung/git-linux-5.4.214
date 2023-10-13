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
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x78184765, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x5e29efa9, "tty_driver_flush_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x80b37b43, "stop_tty" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x80500894, "request_firmware" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5c9109de, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEC16370F398604B404E0D9");
