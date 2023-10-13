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
	{ 0x536a3828, "xfrm6_find_1stfragopt" },
	{ 0x8e41dd41, "xfrm6_rcv" },
	{ 0xc761fae4, "xfrm6_protocol_deregister" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0x44161af5, "xfrm6_protocol_register" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa69d2f6f, "xfrm_input_resume" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xbe4ede51, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xd523d85d, "skb_push" },
	{ 0x4d48a53e, "skb_cow_data" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x641a6005, "ip6_redirect" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3318bc71, "ip6_update_pmtu" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x541ddcec, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "7280237730993B640E95D3D");
