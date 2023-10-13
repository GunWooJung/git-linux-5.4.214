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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x8d28a5bd, "component_unbind_all" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd17a1563, "regmap_exit" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xfb536176, "devres_find" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe49f77bb, "component_bind_all" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x775473fc, "component_master_del" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xce2f01d5, "device_del" },
	{ 0x4a794bc, "__regmap_init" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x74ae9b45, "pm_runtime_get_if_in_use" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xc5f1c3a0, "component_match_add_typed" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x12a38747, "usleep_range" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0x7c914fde, "kobject_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x8e6213f, "devres_destroy" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x3b771659, "component_master_add_with_match" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "6EFBA24099EB7CE6D857863");
