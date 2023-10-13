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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0xf3284af4, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x67e6645b, "crypto_shash_alg_has_setkey" },
	{ 0x1a1c8731, "crypto_grab_aead" },
	{ 0xc5850110, "printk" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0x341f19e6, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0xa824503f, "crypto_shash_digest" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x881f77c7, "crypto_shash_finup" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0xfaeb3b82, "crypto_alloc_base" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "EC970BB391F6A4969223CBC");
