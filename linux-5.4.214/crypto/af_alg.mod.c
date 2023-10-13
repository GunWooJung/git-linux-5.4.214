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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xa0554d18, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0xb6d603e5, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xc63abf34, "sock_no_recvmsg" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x856099ca, "iov_iter_get_pages" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x185eb439, "sock_wake_async" },
	{ 0x285c8d25, "sk_free" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x92f1b35d, "sock_kfree_s" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x399bb8c0, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc7ca941, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xba7d45f2, "sock_no_sendmsg" },
	{ 0x198e31d0, "sock_kzfree_s" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3626C5BE9471AA635DC622");
