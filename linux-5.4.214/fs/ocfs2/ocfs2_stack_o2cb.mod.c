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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43b1d246, "dlmunlock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xab3bdb36, "dlm_register_eviction_cb" },
	{ 0x51b81918, "dlm_register_domain" },
	{ 0x58de057b, "dlm_unregister_domain" },
	{ 0xc5850110, "printk" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0x91716375, "ocfs2_stack_glue_unregister" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0xc12b75e1, "ocfs2_stack_glue_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2aba6a93, "dlmlock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0xd5e8ffad, "dlm_print_one_lock" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "54D6EF1D13BD7F89FB54DDF");
