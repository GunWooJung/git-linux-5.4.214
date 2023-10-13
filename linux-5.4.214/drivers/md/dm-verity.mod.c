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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0xae7b0041, "key_type_user" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x70987b60, "dm_table_get_md" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbec4f55, "request_key_tag" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc1eda733, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x378180d9, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xe48c801d, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0xa6191095, "bio_endio" },
	{ 0x2b4d03e0, "kobject_uevent_env" },
	{ 0x75e60613, "key_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x84267aa, "dm_bio_from_per_bio_data" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x6238d28b, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x58a76393, "verify_pkcs7_signature" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio");


MODULE_INFO(srcversion, "694BE9041F1589D77D96AE1");
