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
	{ 0x1a08f6f2, "ib_create_ah_from_wc" },
	{ 0x2a2a33b4, "ib_modify_mad" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa0039fa, "ib_register_mad_agent" },
	{ 0xca9beaa4, "__xa_store" },
	{ 0x16ab71d3, "ib_free_recv_mad" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x348cc4c1, "rdma_find_gid" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6db4e65c, "rdma_move_ah_attr" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x91b2b41d, "ib_free_send_mad" },
	{ 0xa4237c66, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xb8781f96, "rdma_put_gid_attr" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x5d1a32d0, "ib_get_cached_pkey" },
	{ 0x5fd264df, "__class_register" },
	{ 0x968a9719, "ib_set_client_data" },
	{ 0x5181b8f4, "rdma_destroy_ah_attr" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x228dba14, "ib_create_send_mad" },
	{ 0xcd2d4c76, "ib_post_send_mad" },
	{ 0x29f66da9, "ib_unregister_mad_agent" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49f0406b, "ib_register_client" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2d45b8d4, "ib_find_cached_pkey" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xa508c3a4, "ib_init_ah_attr_from_wc" },
	{ 0x54f5b24a, "rdma_create_ah" },
	{ 0x6e0d91f7, "ib_cancel_mad" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x945fcc28, "ib_modify_port" },
	{ 0xa9a07159, "rdma_query_gid" },
	{ 0x37a0cba, "kfree" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0xda7933fb, "ib_port_register_module_stat" },
	{ 0x8a38fb4e, "ib_port_unregister_module_stat" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5c729d9a, "ib_init_ah_attr_from_path" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd35dc02d, "ib_unregister_client" },
};

MODULE_INFO(depends, "ib_core");


MODULE_INFO(srcversion, "064787B4F655A0FC9597C0A");
