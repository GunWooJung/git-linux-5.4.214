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
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf749debc, "md5_zero_message_hash" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x767cc93e, "crypto_dequeue_request" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x67da9f7c, "sha512_zero_message_hash" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x76eeeb0f, "sha384_zero_message_hash" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x5f675eac, "crypto_unregister_skcipher" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xab011663, "crypto_register_ahash" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xba9190dd, "crypto_register_skcipher" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3596d70b, "crypto_enqueue_request" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x9e166e54, "crypto_unregister_ahash" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x75aaa11d, "crypto_unregister_aead" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x97b74bd, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7a4497db, "kzfree" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x599074f3, "firmware_request_nowarn" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xfaeb3b82, "crypto_alloc_base" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xce4dd865, "dmam_pool_create" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "libdes,authenc");

MODULE_ALIAS("pci:v000010EEd00009038sv000016AEsd0000C522bc*sc*i*");

MODULE_INFO(srcversion, "BA964B5250F36E194E246AA");
