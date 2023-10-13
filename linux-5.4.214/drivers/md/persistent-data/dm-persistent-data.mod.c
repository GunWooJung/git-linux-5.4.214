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
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xc0d7df85, "dm_bufio_new" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0xb15b4109, "crc32c" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x7c381a76, "dm_bufio_get_block_size" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xe48c801d, "dm_bufio_client_create" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xebcc64a4, "dm_bufio_get_block_data" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2e0774dc, "dm_bufio_get_block_number" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad0dc4f, "dm_bufio_mark_buffer_dirty" },
	{ 0x24772bfe, "dm_bufio_get" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x6d3f57bd, "dm_bufio_get_client" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "dm-bufio,libcrc32c");


MODULE_INFO(srcversion, "0A4BF977FC9FEE311D85D58");
