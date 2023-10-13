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
	{ 0x7f12d5a4, "drm_release" },
	{ 0xa96c72b2, "drm_prime_gem_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0x75c8be16, "drm_gem_put_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x8f3bc999, "dma_resv_test_signaled_rcu" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3d14e388, "drm_gem_prime_import_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xbc9c175, "drm_dev_fini" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3006525f, "drm_dev_unregister" },
	{ 0x433b4459, "drm_prime_pages_to_sg" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x40d2e151, "dma_resv_add_shared_fence" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0xeade671, "vmap" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0x8b6e9cc8, "shmem_read_mapping_page_gfp" },
	{ 0x217362dd, "ww_mutex_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xca669996, "fput" },
	{ 0x7eeb1057, "drm_gem_vm_open" },
	{ 0xeb294f1d, "drm_gem_vm_close" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x52c31fb4, "drm_gem_prime_fd_to_handle" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0x90d6056a, "drm_gem_mmap" },
	{ 0xdb98c7e4, "drm_clflush_pages" },
	{ 0x13106c72, "dma_resv_reserve_shared" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfee62683, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbc3909b2, "drm_gem_prime_handle_to_fd" },
	{ 0x3b861904, "drm_gem_object_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x92890d3a, "ww_mutex_unlock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xed0de0b0, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8c202b9, "drm_gem_get_pages" },
	{ 0x5aa4a06e, "dma_resv_add_excl_fence" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x57f8a74e, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "FECD1854B6D77A38D5FAB13");
