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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x8de7339d, "ttm_pool_populate" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc88ecd63, "ttm_bo_eviction_valuable" },
	{ 0x281c4ba4, "ttm_tt_fini" },
	{ 0x292c9890, "ttm_bo_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c8451e3, "ttm_bo_move_to_lru_tail" },
	{ 0xd70aee2d, "ttm_bo_validate" },
	{ 0x48c1a46d, "ttm_bo_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe1992cc5, "ttm_bo_add_to_lru" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0x7a3f493e, "ttm_bo_kmap" },
	{ 0xb02edf83, "ttm_tt_init" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0x8aca3952, "ttm_bo_dma_acc_size" },
	{ 0x6bc7bb63, "ttm_bo_init_mm" },
	{ 0xb9035f53, "ttm_bo_device_init" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab25f66f, "ttm_bo_del_sub_from_lru" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40eab978, "ttm_bo_kunmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3b861904, "drm_gem_object_init" },
	{ 0x1940f2e9, "ttm_bo_device_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x92890d3a, "ww_mutex_unlock" },
	{ 0x80c8fa04, "ttm_bo_manager_func" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x507ecee8, "ttm_pool_unpopulate" },
	{ 0x76b71729, "ww_mutex_lock_interruptible" },
	{ 0x1a14efd8, "ttm_bo_mmap" },
};

MODULE_INFO(depends, "ttm,drm");


MODULE_INFO(srcversion, "86A60583560940A8EB4ED7C");
