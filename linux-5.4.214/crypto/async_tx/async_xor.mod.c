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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0xfb578fc5, "memset" },
	{ 0xf5db5951, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x17692e18, "dmaengine_get_unmap_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xda1654eb, "__async_tx_find_channel" },
	{ 0xc1a816fe, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9fe59f14, "dma_ops" },
};

MODULE_INFO(depends, "async_tx,xor");


MODULE_INFO(srcversion, "9DB4B7810A4C806F8FEB2B0");
