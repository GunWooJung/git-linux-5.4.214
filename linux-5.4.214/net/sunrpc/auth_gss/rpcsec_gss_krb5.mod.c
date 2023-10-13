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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x8ef3cbf5, "write_bytes_to_xdr_buf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0xa723b1cd, "gss_mech_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x9072ac1d, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa824503f, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x897882e1, "gss_mech_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf9c52faf, "read_bytes_from_xdr_buf" },
	{ 0x209f48f3, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0xdf64d234, "xdr_buf_trim" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "auth_rpcgss,sunrpc");


MODULE_INFO(srcversion, "09B93E252E7311769A6B47A");
