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
	{ 0x9987fbc3, "rtl_cam_delete_one_entry" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x6cec3d34, "rtl_fw_cb" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x61b21f92, "rtl_pci_probe" },
	{ 0xafa1d49e, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe2d4663d, "rtl_dm_diginit" },
	{ 0x566f539a, "rtl_ps_disable_nic" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x53e8757b, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x9e775e5d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f2c8e0f, "rtl_phy_scan_operation_backup" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x67367026, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2fb464d6, "rtl_ps_enable_nic" },
	{ 0x12094721, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xd523d85d, "skb_push" },
	{ 0xee0be5c9, "rtl_fw_page_write" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x5f6dfbbf, "rtl_pci_suspend" },
	{ 0x8359a56c, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x222c4113, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x83083fdb, "rtl_rfreg_delay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1d1e61b1, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4451dbc2, "rtl_cam_del_entry" },
	{ 0x5fd6b0b4, "rtl_cam_empty_entry" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x4c0df32a, "rtl_cam_reset_all_entry" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xbf367777, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci");

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2EFC8F78F866BF96FB75323");
