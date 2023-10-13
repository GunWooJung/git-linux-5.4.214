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
	{ 0x922dc5b2, "crypto_unregister_template" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf3284af4, "skcipher_register_instance" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x452153f6, "crypto_inst_setname" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84f3a0dd, "skcipher_walk_done" },
	{ 0xc2ec7ce2, "skcipher_walk_virt" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B93B70A40473D2EBB29F031");
