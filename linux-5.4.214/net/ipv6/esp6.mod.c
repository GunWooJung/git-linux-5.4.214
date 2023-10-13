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
	{ 0x44161af5, "xfrm6_protocol_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcbdd2046, "skb_to_sgvec" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x25205856, "xfrm_dev_resume" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x75d97d2f, "pskb_put" },
	{ 0xba200321, "skb_page_frag_refill" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4d48a53e, "skb_cow_data" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xa69d2f6f, "xfrm_input_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x373750fb, "xfrm_state_mtu" },
	{ 0x536a3828, "xfrm6_find_1stfragopt" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x541ddcec, "xfrm_output_resume" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x8e41dd41, "xfrm6_rcv" },
	{ 0x75942744, "__put_page" },
	{ 0xc761fae4, "xfrm6_protocol_deregister" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "808DE66DE36C0A798DF41BC");
