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
	{ 0x8d104b58, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x196dc876, "mddev_suspend" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc20d6c3d, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0x9e45c8d2, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6720ee52, "disk_stack_limits" },
	{ 0xb54e249b, "bio_chain" },
	{ 0x4f556428, "generic_make_request" },
	{ 0xa6191095, "bio_endio" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x6017cc7a, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xad84b03e, "md_set_array_sectors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x56ba12ab, "mddev_resume" },
	{ 0xd648235b, "md_check_no_bitmap" },
	{ 0x6fa58088, "md_integrity_register" },
	{ 0x82e38d1b, "register_md_personality" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");
