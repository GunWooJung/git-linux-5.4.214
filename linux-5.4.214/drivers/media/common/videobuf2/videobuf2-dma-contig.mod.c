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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xcc50368f, "dma_get_sgtable_attrs" },
	{ 0x309b8cc9, "dma_mmap_attrs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8a19c5a, "dma_buf_detach" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0x67f4158d, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xfebb27d7, "dma_buf_unmap_attachment" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x19fd9ed5, "dma_direct_map_resource" },
	{ 0x15a2185f, "dma_buf_map_attachment" },
	{ 0x8fc1ff74, "dma_buf_export" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
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
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "4B7314017A36164285B75A3");
