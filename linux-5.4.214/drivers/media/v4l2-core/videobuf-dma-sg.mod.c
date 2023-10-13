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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x668b19a1, "down_read" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xeade671, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x232c7da2, "videobuf_alloc_vb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa242f6b1, "get_user_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0xde8cb091, "videobuf_queue_core_init" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "videobuf-core");


MODULE_INFO(srcversion, "25ED1704F2BA10C98BC119C");
