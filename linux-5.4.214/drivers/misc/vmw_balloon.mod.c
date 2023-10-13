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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xe0c58509, "kill_anon_super" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x2e6c732a, "balloon_aops" },
	{ 0x995301e6, "alloc_anon_inode" },
	{ 0x2628c98d, "kern_mount" },
	{ 0x98054025, "register_shrinker" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29ad8e33, "x86_hyper_type" },
	{ 0xb912560d, "static_key_disable" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb2efe8f2, "balloon_page_alloc" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xc5850110, "printk" },
	{ 0xb572e830, "vmci_doorbell_create" },
	{ 0x2c51cbe, "split_page" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x668b19a1, "down_read" },
	{ 0x75942744, "__put_page" },
	{ 0xdc693dac, "__SetPageMovable" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xe176516b, "__ClearPageMovable" },
	{ 0x53b954a2, "up_read" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x39fd444c, "balloon_page_list_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e949e0a, "vmci_doorbell_destroy" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6b2b69f7, "static_key_enable" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe8726fa8, "unregister_shrinker" },
	{ 0x9b3b87e7, "kern_unmount" },
	{ 0xd5e16552, "iput" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x26d24cb8, "vm_event_states" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x564ed4f8, "balloon_page_list_enqueue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x48e44fe4, "init_pseudo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vmw_vmci");


MODULE_INFO(srcversion, "C8CB7CDF5877C9D3BB2B26B");
