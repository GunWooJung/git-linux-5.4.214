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
	{ 0x5f3d4f66, "blk_queue_rq_timeout" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x94996073, "vmbus_sendpacket_mpb_desc" },
	{ 0xdf6e8946, "__hv_pkt_iter_next" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x71746698, "scsi_remove_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe7af1825, "vmbus_set_sc_create_callback" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x91f5647e, "hv_pkt_iter_close" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xacc03556, "scsi_rescan_device" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0x4f46dbf7, "fc_release_transport" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x618911fc, "numa_node" },
	{ 0xcffbc9e1, "scsi_add_device" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d756705, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0xa0316fe8, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1b4a34f4, "scsi_test_unit_ready" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x1b6694f0, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfd4d4661, "fc_eh_timed_out" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x643ab05a, "hv_pkt_iter_first" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0x9b67b4a0, "fc_remove_host" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x21c6c379, "fc_remote_port_add" },
	{ 0xa084f79f, "cpumask_next_wrap" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x71cf52c6, "fc_attach_transport" },
	{ 0x94fbb209, "scsi_print_sense_hdr" },
	{ 0x72fc91c0, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,scsi_transport_fc");

MODULE_ALIAS("vmbus:d96361baa104294db60572e2ffb1dc7f");
MODULE_ALIAS("vmbus:32264132cb86a2449b5c50d1417354f5");
MODULE_ALIAS("vmbus:4acc9b2f6900f34ab76b6fd0be528cda");

MODULE_INFO(srcversion, "A2F4BC96E37B3782A9F28E3");
