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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x32ee9868, "simple_open" },
	{ 0xb5807f49, "ntb_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xef3c0d77, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x17692e18, "dmaengine_get_unmap_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x245b30bf, "ntb_default_port_number" },
	{ 0x1e4ba250, "ntb_default_peer_port_count" },
	{ 0xf1c699e0, "ntb_default_peer_port_number" },
	{ 0x3f7ad254, "debugfs_create_bool" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0x9f2dda53, "ntb_set_ctx" },
	{ 0x3c4b7b31, "devm_ioremap_wc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf8dfde50, "ntb_clear_ctx" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "520A6B467368C6AE1096BB0");
