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
	{ 0x984c5e73, "p9_fcall_fini" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2d2bc06e, "p9_client_cb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb3d1b728, "v9fs_unregister_trans" },
	{ 0x25c77496, "ib_dealloc_pd_user" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44e9a829, "match_token" },
	{ 0xf6d288c7, "v9fs_register_trans" },
	{ 0xa8198878, "__rdma_create_id" },
	{ 0xae316914, "rdma_destroy_id" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xb79f25fd, "p9_parse_header" },
	{ 0x7473b3b9, "p9_tag_lookup" },
	{ 0xcc1a175a, "rdma_connect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc5622172, "ib_destroy_qp_user" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x4e3567f7, "match_int" },
	{ 0x71803725, "__ib_alloc_cq_any" },
	{ 0x721c9d1f, "init_net" },
	{ 0xe6977f13, "rdma_create_qp" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9197013a, "rdma_bind_addr" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd8897522, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec30595, "rdma_disconnect" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x42b02a1a, "rdma_resolve_addr" },
	{ 0xa8064d4, "__ib_alloc_pd" },
	{ 0x29361773, "complete" },
	{ 0x6c36e95b, "p9_req_put" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdb099f5f, "ib_free_cq_user" },
};

MODULE_INFO(depends, "9pnet,ib_core,rdma_cm");


MODULE_INFO(srcversion, "9065E052E74D5033B192DB3");
