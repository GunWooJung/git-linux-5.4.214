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
	{ 0xf1ee853d, "crypto_alloc_skcipher" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x45556cb, "cryptd_free_skcipher" },
	{ 0x6ffe62f4, "crypto_unregister_skciphers" },
	{ 0x2fc83380, "cryptd_free_aead" },
	{ 0x8f26a864, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28d6d258, "crypto_register_skciphers" },
	{ 0x5f675eac, "crypto_unregister_skcipher" },
	{ 0x360bbbcf, "cryptd_aead_queued" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xba9190dd, "crypto_register_skcipher" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x5adc8ccb, "cryptd_alloc_skcipher" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66672f0a, "cryptd_skcipher_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x7ef8788f, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0xeedc6fb0, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x75aaa11d, "crypto_unregister_aead" },
	{ 0x97b74bd, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xfaa5e063, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc31fe21, "cryptd_alloc_aead" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "1ACFB78EF3632E97172F629");
