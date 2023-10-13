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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd3a0eec8, "vlan_dev_vlan_id" },
	{ 0x73588f11, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f1fe672, "qede_rdma_unregister_driver" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x868c466e, "qed_get_rdma_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0x7f18313d, "__neigh_event_send" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x721c9d1f, "init_net" },
	{ 0x5181b8f4, "rdma_destroy_ah_attr" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x83c278a3, "qede_rdma_register_driver" },
	{ 0xc9a835aa, "ib_umem_page_count" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x809e726c, "__ip_dev_find" },
	{ 0x96848186, "scnprintf" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x4e4ec485, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc299c283, "pci_enable_atomic_ops_to_root" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa25128, "rdma_copy_ah_attr" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,qede,qed,ib_uverbs");


MODULE_INFO(srcversion, "E69162080533DC5C1059BDB");
