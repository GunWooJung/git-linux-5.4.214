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
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xba7d45f2, "sock_no_sendmsg" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x826617df, "af_alg_release" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x49e7599b, "af_alg_unregister_type" },
	{ 0xe945a8e5, "af_alg_register_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa8952eb2, "crypto_stats_rng_generate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0xd8ca6956, "crypto_alloc_rng" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xa9a666c3, "crypto_rng_reset" },
	{ 0x7bb04bb9, "af_alg_release_parent" },
	{ 0x92f1b35d, "sock_kfree_s" },
	{ 0xdc7ca941, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "112487709BD197DFB9228B2");
