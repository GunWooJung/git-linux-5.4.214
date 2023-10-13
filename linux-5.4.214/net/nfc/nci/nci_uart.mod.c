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
	{ 0x53b954a2, "up_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x20bbb285, "tty_unthrottle" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x668b19a1, "down_read" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xc5850110, "printk" },
	{ 0xd2b73a53, "n_tty_ioctl_helper" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x5e29efa9, "tty_driver_flush_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x92f3df13, "tty_set_termios" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C3D1C4BD991CD595D2B5232");
