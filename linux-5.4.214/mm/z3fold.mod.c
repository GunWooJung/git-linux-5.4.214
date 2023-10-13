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
	{ 0xe0c58509, "kill_anon_super" },
	{ 0x89a268ac, "zpool_unregister_driver" },
	{ 0x9b3b87e7, "kern_unmount" },
	{ 0xcd8f7b0d, "zpool_register_driver" },
	{ 0x2628c98d, "kern_mount" },
	{ 0x75942744, "__put_page" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x43a0043, "page_mapping" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc693dac, "__SetPageMovable" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb0e602eb, "memmove" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa97d7441, "__lock_page" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xe176516b, "__ClearPageMovable" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x995301e6, "alloc_anon_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x48e44fe4, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xd5e16552, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "11DF66DDBFAB9719CD95939");
