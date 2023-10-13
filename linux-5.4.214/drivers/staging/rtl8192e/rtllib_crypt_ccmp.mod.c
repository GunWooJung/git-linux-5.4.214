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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x2f8fb84, "lib80211_unregister_crypto_ops" },
	{ 0x6af5d7bc, "lib80211_register_crypto_ops" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7a4497db, "kzfree" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "79C1D152E351CFB51243839");
