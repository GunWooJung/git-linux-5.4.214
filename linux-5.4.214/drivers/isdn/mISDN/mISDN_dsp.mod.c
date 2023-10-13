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
	{ 0x59ee3bb2, "mISDN_unregister_Bprotocol" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xd285995f, "mISDN_clock_get" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x24d273d1, "add_timer" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1e52ab5c, "mISDN_register_Bprotocol" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5328374d, "__class_create" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "42459B9FBE5CC0CE9309D8A");
