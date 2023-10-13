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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfb578fc5, "memset" },
	{ 0xf1ee853d, "crypto_alloc_skcipher" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xc5850110, "printk" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3F0CF96026618C2D560FA3D");
