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
	{ 0x38e46431, "mempool_exit" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf07719f6, "bio_devname" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124a568e, "md_check_recovery" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc20d6c3d, "unregister_md_personality" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x72f81a61, "md_register_thread" },
	{ 0xfd7af9ef, "bio_init" },
	{ 0x9e45c8d2, "md_flush_request" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x6720ee52, "disk_stack_limits" },
	{ 0x3885862f, "seq_putc" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf39c5b09, "md_integrity_add_rdev" },
	{ 0xa6191095, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6017cc7a, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xad84b03e, "md_set_array_sectors" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa7696816, "md_wakeup_thread" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x5fc40508, "__bio_clone_fast" },
	{ 0xe1c81d6e, "md_error" },
	{ 0xd648235b, "md_check_no_bitmap" },
	{ 0x6fa58088, "md_integrity_register" },
	{ 0x82e38d1b, "register_md_personality" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "24082A9E4533F660D1EDE85");
