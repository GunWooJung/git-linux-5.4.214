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
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf4f7fb7d, "ntb_msi_peer_trigger" },
	{ 0x1db7706b, "__copy_user_nocache" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x5b5f7e89, "dmaengine_unmap_put" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x17692e18, "dmaengine_get_unmap_data" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x106f8cfb, "dma_sync_wait" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5a921311, "strncmp" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xa94a09bb, "mem_section" },
	{ 0xb5807f49, "ntb_unregister_client" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x19fd9ed5, "dma_direct_map_resource" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x65eeb1cb, "ntb_msi_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x580da2dd, "ntbm_msi_request_threaded_irq" },
	{ 0x47d15cb3, "ntb_msi_setup_mws" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1e4ba250, "ntb_default_peer_port_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef3c0d77, "__ntb_register_client" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xf8dfde50, "ntb_clear_ctx" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x4d64d639, "ntb_link_event" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x9f2dda53, "ntb_set_ctx" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "0B266B7C7CE6B6E7F86D619");
