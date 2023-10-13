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
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1b4c33b3, "rdma_get_service_id" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6932b09e, "stream_open" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x5b3e282f, "xa_store" },
	{ 0x7be5510, "rdma_join_multicast" },
	{ 0x63057f4b, "ib_copy_path_rec_to_user" },
	{ 0xe0b3b32, "rdma_read_gids" },
	{ 0xa8198878, "__rdma_create_id" },
	{ 0xae316914, "rdma_destroy_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc66763c5, "ib_copy_ah_attr_to_user" },
	{ 0xe44872ab, "rdma_init_qp_attr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0xcc1a175a, "rdma_connect" },
	{ 0x9168fc44, "rdma_set_reuseaddr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xbac5818a, "rdma_set_ib_path" },
	{ 0xb36e4148, "ib_sa_pack_path" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xc47d8e9a, "__rdma_accept" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4a0b1193, "rdma_listen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6ab30b3e, "ib_copy_qp_attr_to_user" },
	{ 0x1fc7daa8, "rdma_set_afonly" },
	{ 0x9e9ce95d, "rdma_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x721c9d1f, "init_net" },
	{ 0xca669996, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0xa52ed0cd, "__task_pid_nr_ns" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0x9197013a, "rdma_bind_addr" },
	{ 0xd8897522, "rdma_resolve_route" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd6636ca6, "rdma_addr_size_in6" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaec30595, "rdma_disconnect" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a43c928, "rdma_reject" },
	{ 0x86cef180, "rdma_addr_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b38b7e7, "rdma_set_service_type" },
	{ 0x733ab0ea, "rdma_set_ack_timeout" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x42b02a1a, "rdma_resolve_addr" },
	{ 0x305e5701, "rdma_addr_size_kss" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe5a78c1e, "ib_sa_unpack_path" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x35775925, "misc_deregister" },
	{ 0xd35dc02d, "ib_unregister_client" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x42b7227, "rdma_leave_multicast" },
};

MODULE_INFO(depends, "rdma_cm,ib_uverbs,ib_core");


MODULE_INFO(srcversion, "CBDBD59886E6DF046BD7F42");
