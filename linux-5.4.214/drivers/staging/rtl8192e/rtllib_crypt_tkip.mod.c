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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0xc5850110, "printk" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd523d85d, "skb_push" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "24920C6516453B517FBFF9C");
