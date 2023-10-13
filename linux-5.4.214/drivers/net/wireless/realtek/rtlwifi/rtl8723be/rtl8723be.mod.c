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
	{ 0x6cec3d34, "rtl_fw_cb" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x59c76ac5, "rtl8723_phy_reload_adda_registers" },
	{ 0x61b21f92, "rtl_pci_probe" },
	{ 0xafa1d49e, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe2d4663d, "rtl_dm_diginit" },
	{ 0x566f539a, "rtl_ps_disable_nic" },
	{ 0x9805bdbf, "rtl_btc_get_ops_pointer" },
	{ 0xb9a16b02, "rtl_hal_pwrseqcmdparsing" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x16012067, "rtl8723_download_fw" },
	{ 0xb7bc8c3f, "efuse_power_switch" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x53e8757b, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x9e775e5d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x9004e288, "rtl8723_dm_init_dynamic_txpower" },
	{ 0x67367026, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4ca80158, "rtl8723_phy_reload_mac_registers" },
	{ 0x2fb464d6, "rtl_ps_enable_nic" },
	{ 0x12094721, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5214e27b, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0xc5850110, "printk" },
	{ 0xd93318bc, "rtl8723_phy_rf_serial_read" },
	{ 0x18bbc8ca, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xd523d85d, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x35292574, "rtl_signal_scale_mapping" },
	{ 0x3ac656ef, "rtl8723_phy_mac_setting_calibration" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0xf506266f, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0x64faa63c, "rtl_set_tx_report" },
	{ 0xb6ae468c, "rtl8723_dm_init_edca_turbo" },
	{ 0x5f6dfbbf, "rtl_pci_suspend" },
	{ 0x8359a56c, "rtlwifi_rate_mapping" },
	{ 0xcbf13439, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x222c4113, "rtl_pci_disconnect" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xf6496004, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3e963eb1, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5675b4ed, "rtl8723_phy_save_mac_registers" },
	{ 0x1d1e61b1, "rtl_cam_mark_invalid" },
	{ 0x368e02b1, "efuse_one_byte_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4451dbc2, "rtl_cam_del_entry" },
	{ 0x5fd6b0b4, "rtl_cam_empty_entry" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x4c0df32a, "rtl_cam_reset_all_entry" },
	{ 0xfbddb957, "rtl8723be_firmware_selfreset" },
	{ 0xe48cf25f, "rtl8723_phy_path_adda_on" },
	{ 0xbd2910b5, "rtl_process_phyinfo" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x260b1b40, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x1e0767bf, "rtl8723_phy_set_bb_reg" },
	{ 0xbf367777, "param_ops_ullong" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

MODULE_INFO(depends, "rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "775916BF393FDE315ED454E");
