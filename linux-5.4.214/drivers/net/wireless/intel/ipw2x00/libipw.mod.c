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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x67f583d4, "lib80211_crypt_delayed_deinit" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc48ad170, "lib80211_crypt_info_free" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xc42fd9fe, "wireless_spy_update" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x203c2379, "lib80211_get_crypto_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41535a31, "lib80211_crypt_info_init" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,lib80211");


MODULE_INFO(srcversion, "8619399C6B15F0EA7D28264");
