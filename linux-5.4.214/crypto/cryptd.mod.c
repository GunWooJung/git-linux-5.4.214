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
	{ 0xf1ee853d, "crypto_alloc_skcipher" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x67a2f90e, "ahash_register_instance" },
	{ 0x5ec52bce, "shash_attr_alg" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x767cc93e, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x1eca6418, "shash_ahash_digest" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0x922dc5b2, "crypto_unregister_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7d6b096, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf3284af4, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x67e6645b, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x1a1c8731, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3596d70b, "crypto_enqueue_request" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0x6c5722e4, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa0ef9fb, "shash_ahash_update" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "368198CDC7129BC60F51E5C");
