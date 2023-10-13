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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8a19c5a, "dma_buf_detach" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9354d71a, "vm_map_pages" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0x67f4158d, "dma_buf_vunmap" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xc5850110, "printk" },
	{ 0x8b4598ac, "vm_map_ram" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfebb27d7, "dma_buf_unmap_attachment" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x2c51cbe, "split_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x15a2185f, "dma_buf_map_attachment" },
	{ 0x8fc1ff74, "dma_buf_export" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3e69b741, "dma_buf_attach" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x945bbf21, "vb2_common_vm_ops" },
	{ 0x318a8467, "dma_direct_sync_sg_for_device" },
	{ 0xeaa5f763, "sg_alloc_table_from_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x7984fc09, "dma_buf_vmap" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "D06D4B3B9B0136A1EB36377");
