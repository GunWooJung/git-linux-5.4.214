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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2aac1039, "crypto_stats_akcipher_verify" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xa3ab270e, "tpm_is_tpm2" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1c9bcd8a, "crypto_stats_akcipher_encrypt" },
	{ 0x79470a2c, "TSS_authhmac" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd0d428ed, "crypto_alloc_akcipher" },
	{ 0xc4a72936, "trusted_tpm_send" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xde6f1851, "TSS_checkhmac1" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x6aee33a3, "tpm_get_random" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x235e5caa, "oiap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3D47B504399FD15ECDCFD12");
