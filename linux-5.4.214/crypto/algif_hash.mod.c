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
	{ 0x9525f20, "sock_no_getname" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x826617df, "af_alg_release" },
	{ 0x49e7599b, "af_alg_unregister_type" },
	{ 0xe945a8e5, "af_alg_register_type" },
	{ 0xc4ac9a21, "af_alg_make_sg" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x2b575952, "af_alg_free_sg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0x7b01aee9, "crypto_ahash_finup" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x285c8d25, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0c5732d, "af_alg_accept" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7bb04bb9, "af_alg_release_parent" },
	{ 0x92f1b35d, "sock_kfree_s" },
	{ 0x198e31d0, "sock_kzfree_s" },
	{ 0xfb578fc5, "memset" },
	{ 0xdc7ca941, "sock_kmalloc" },
	{ 0xa0554d18, "release_sock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "BEF8B29EAC9EEFBE1DA0351");
