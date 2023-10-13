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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e922c28, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa824503f, "crypto_shash_digest" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xab011663, "crypto_register_ahash" },
	{ 0xde1b2a7e, "cxgb4_crypto_send" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x9e166e54, "crypto_unregister_ahash" },
	{ 0xad446de8, "crypto_register_alg" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x685b2c94, "cxgb4_register_uld" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x78a16f48, "aes_decrypt" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x7a1bcd59, "gf128mul_x8_ble" },
	{ 0x37a0cba, "kfree" },
	{ 0x75aaa11d, "crypto_unregister_aead" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x97b74bd, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0xf6c7e757, "crypto_unregister_alg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cxgb4,authenc");


MODULE_INFO(srcversion, "E5B66AED2789CCBC56411A9");
