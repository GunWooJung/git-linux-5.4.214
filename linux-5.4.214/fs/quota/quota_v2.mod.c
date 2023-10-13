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
	{ 0x10f0d64, "unregister_quota_format" },
	{ 0xfd7f2593, "register_quota_format" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x132d1553, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x3a9c63ab, "make_kprojid" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa44a9ece, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc049ae64, "__quota_error" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x700396d1, "qtree_read_dquot" },
	{ 0x28e2c85d, "qtree_write_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0xdd13160a, "qtree_release_dquot" },
	{ 0x57bc19d2, "down_write" },
	{ 0x53b954a2, "up_read" },
	{ 0xa97c7558, "qtree_get_next_id" },
	{ 0x668b19a1, "down_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "513162E89BAA42FB897F382");
