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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xf5db5951, "async_tx_submit" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x17692e18, "dmaengine_get_unmap_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xda1654eb, "__async_tx_find_channel" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5147a2c5, "async_xor" },
	{ 0xc1a816fe, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x9fe59f14, "dma_ops" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_xor");


MODULE_INFO(srcversion, "7FE9F4C429C4B7E7C97A511");
