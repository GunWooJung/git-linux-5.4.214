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
	{ 0x69d14261, "crypto_unregister_templates" },
	{ 0xf070f3f9, "crypto_register_templates" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0xe2d9925f, "crypto_init_ahash_spawn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0xd9f887cf, "crypto_find_alg" },
	{ 0xbb54871d, "crypto_ahash_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x7b01aee9, "crypto_ahash_finup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "074D83CA612886269DD0ABC");
