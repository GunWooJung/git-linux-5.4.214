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
	{ 0xfc408ce, "xfrm_input" },
	{ 0xa14db5ec, "xfrm4_rcv" },
	{ 0xea80f9d3, "xfrm4_protocol_deregister" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0x9fbaf1bc, "xfrm4_protocol_register" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa69d2f6f, "xfrm_input_resume" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfc6f9cca, "__xfrm_state_destroy" },
	{ 0x32ca8a56, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1739cb70, "ipv4_redirect" },
	{ 0xce71465f, "xfrm_state_lookup" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xbe4ede51, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xfb578fc5, "memset" },
	{ 0xd523d85d, "skb_push" },
	{ 0x4d48a53e, "skb_cow_data" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x541ddcec, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xfrm_algo");


MODULE_INFO(srcversion, "788C445981331A6664A5C16");
