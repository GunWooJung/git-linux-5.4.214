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
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xe2d9925f, "crypto_init_ahash_spawn" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0xf0d7ddd, "ahash_attr_alg" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0x922dc5b2, "crypto_unregister_template" },
	{ 0x25fa3b32, "crypto_get_default_null_skcipher" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "68DE5FDCD7F2F8F0F9E1356");
