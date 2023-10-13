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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd9533b21, "skb_append" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xd523d85d, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEC94F5B375B368B80A7482");
