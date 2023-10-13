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
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x2908f394, "af_alg_poll" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x826617df, "af_alg_release" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x49e7599b, "af_alg_unregister_type" },
	{ 0xe945a8e5, "af_alg_register_type" },
	{ 0x25fa3b32, "crypto_get_default_null_skcipher" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x285c8d25, "sk_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xa1052391, "af_alg_count_tsgl" },
	{ 0x5d13e799, "af_alg_wmem_wakeup" },
	{ 0x455a4bdf, "af_alg_free_resources" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x863a152c, "af_alg_async_cb" },
	{ 0x18848050, "af_alg_get_rsgl" },
	{ 0x6a9b6ca7, "af_alg_alloc_areq" },
	{ 0x834d4f8c, "af_alg_wait_for_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xdc7ca941, "sock_kmalloc" },
	{ 0x7bb04bb9, "af_alg_release_parent" },
	{ 0x92f1b35d, "sock_kfree_s" },
	{ 0x198e31d0, "sock_kzfree_s" },
	{ 0x937912a6, "af_alg_pull_tsgl" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x45e34d2e, "af_alg_sendmsg" },
	{ 0x1cd396a4, "af_alg_sendpage" },
	{ 0xa0554d18, "release_sock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "81E584D90DD0D30A04502E2");
