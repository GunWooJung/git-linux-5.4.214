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
	{ 0x2323a530, "cxgbi_ppm_ppods_reserve" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7e54b886, "__kfree_skb" },
	{ 0xe1e76060, "iscsi_host_remove" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x400d530, "iscsi_tcp_set_max_r2t" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xe2ff0590, "cxgbi_ppm_ppod_release" },
	{ 0xa6195a97, "iscsi_tcp_recv_skb" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9551809a, "iscsi_unregister_transport" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x1343058e, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x20a57515, "iscsi_host_add" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6ab8a6c9, "iscsi_host_alloc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xef735d71, "iscsi_lookup_endpoint" },
	{ 0x906f19e8, "iscsi_tcp_r2tpool_free" },
	{ 0xde47d450, "iscsi_itt_to_ctask" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xde2d7a57, "cxgbi_ppm_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdbc1eea4, "iscsi_tcp_r2tpool_alloc" },
	{ 0x7a46b404, "iscsi_host_set_param" },
	{ 0xab8926d2, "iscsi_host_free" },
	{ 0x3c5ad033, "iscsi_suspend_tx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c579670, "iscsi_destroy_endpoint" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x721c9d1f, "init_net" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0x1f584711, "iscsi_tcp_conn_setup" },
	{ 0x6d88f1e3, "vlan_dev_real_dev" },
	{ 0x76314ed4, "ipv6_dev_get_saddr" },
	{ 0x9279ff47, "iscsi_set_param" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x744b2b27, "ip6_route_output_flags" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x38c97622, "iscsi_register_transport" },
	{ 0x4fcbfaa6, "iscsi_tcp_cleanup_task" },
	{ 0xbe339589, "iscsi_conn_queue_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcd85a7da, "iscsi_tcp_hdr_recv_prep" },
	{ 0x47af8dce, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8891bb40, "iscsi_conn_failure" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x6f6bac3f, "iscsi_create_endpoint" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x809e726c, "__ip_dev_find" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf1ed9eb1, "iscsi_session_setup" },
	{ 0xbf463a3, "iscsi_host_get_param" },
	{ 0x56a525e3, "iscsi_conn_bind" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x4b11eefb, "iscsi_tcp_recv_segment_is_hdr" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x11fa6000, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "EDFFCCE980B11CB1F51E164");
