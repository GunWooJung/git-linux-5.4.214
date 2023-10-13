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
	{ 0xec8d9500, "pm_genpd_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x48b62a57, "drm_dp_link_train_channel_eq_delay" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x96b31ebb, "drm_atomic_get_private_obj_state" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x1ad23797, "drm_fb_helper_debug_enter" },
	{ 0xd1b36d89, "drm_gem_map_dma_buf" },
	{ 0x4c2cd0cc, "drm_add_edid_modes" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x85df9b6c, "strsep" },
	{ 0x4eb92e44, "drm_fb_helper_cfb_copyarea" },
	{ 0x7634b843, "drm_kms_helper_hotplug_event" },
	{ 0x4c7854ef, "drm_atomic_private_obj_fini" },
	{ 0xf0202ca, "drm_helper_resume_force_mode" },
	{ 0xa08dadf6, "drm_kms_helper_poll_fini" },
	{ 0xc5736883, "drm_sched_increase_karma" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3e4c1ce4, "drm_hdmi_infoframe_set_hdr_metadata" },
	{ 0xedc03953, "iounmap" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3db36002, "drm_crtc_vblank_get" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0xf440cfed, "drm_edid_is_valid" },
	{ 0x13106c72, "dma_resv_reserve_shared" },
	{ 0xd49dbf68, "drm_syncobj_find" },
	{ 0x24f0b239, "remove_conflicting_pci_framebuffers" },
	{ 0xffb7c514, "ida_free" },
	{ 0xecaf179f, "drm_connector_set_vrr_capable_property" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11b5976f, "drm_syncobj_replace_fence" },
	{ 0xe64f809, "drm_gem_map_attach" },
	{ 0x77013741, "ttm_tt_set_placement_caching" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x5c99e468, "drm_dev_dbg" },
	{ 0x342f4c52, "drm_modeset_lock_all" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xb8b093c8, "pci_bus_resource_n" },
	{ 0x754d539c, "strlen" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0xcdfaebc8, "get_pid_task" },
	{ 0x4ad46234, "drm_gem_fb_create_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6fe2cce8, "drm_handle_vblank" },
	{ 0x2d2e8ee8, "seq_write" },
	{ 0x1ec8533f, "drm_kms_helper_poll_disable" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe173653a, "sysfs_remove_file_ns" },
	{ 0x7c8451e3, "ttm_bo_move_to_lru_tail" },
	{ 0x239ebb26, "drm_property_create_range" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xa03ebbef, "drm_read" },
	{ 0x29b33a0f, "drm_sched_entity_fini" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5328374d, "__class_create" },
	{ 0xc0249e71, "drm_crtc_init_with_planes" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4acda734, "drm_compat_ioctl" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0x4edeab8e, "drm_sched_fini" },
	{ 0x347b46e0, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc299c283, "pci_enable_atomic_ops_to_root" },
	{ 0xf163c166, "drm_mode_object_find" },
	{ 0x67d77d81, "drm_fb_helper_init" },
	{ 0xfd65f771, "drm_helper_connector_dpms" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9c2fdbd4, "component_add" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x2d5412dc, "drm_crtc_vblank_put" },
	{ 0x5079c1f0, "amd_iommu_set_invalid_ppr_cb" },
	{ 0x76182e4b, "drm_detect_hdmi_monitor" },
	{ 0xdd32eeea, "drm_dp_cec_irq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa44a1307, "interval_tree_iter_first" },
	{ 0xab7a3b22, "drm_crtc_helper_set_config" },
	{ 0x8414330d, "drm_atomic_helper_set_config" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xc10fa2b2, "drm_framebuffer_unregister_private" },
	{ 0x3e50f4a1, "ttm_dma_unpopulate" },
	{ 0x24599bd1, "drm_framebuffer_cleanup" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x32183db, "drm_gem_private_object_init" },
	{ 0xbe051e1, "pci_assign_unassigned_bus_resources" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb833f2a4, "drm_dp_cec_set_edid" },
	{ 0xb6605c5e, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x433b4459, "drm_prime_pages_to_sg" },
	{ 0x8ff2cb38, "drm_dev_register" },
	{ 0x4685f226, "pci_release_resource" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9045dbd6, "drm_connector_list_iter_next" },
	{ 0xa25df39c, "request_firmware_direct" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe93e7472, "drm_fb_helper_cfb_imageblit" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xfc7b77dc, "drm_crtc_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdd64e639, "strscpy" },
	{ 0x27316a09, "drm_atomic_helper_commit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf2b81b64, "arch_io_reserve_memtype_wc" },
	{ 0x4a958f0a, "drm_fb_helper_set_par" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x715662ef, "drm_dev_printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x9e3047d0, "drm_fb_helper_blank" },
	{ 0xd31b56a2, "drm_dp_check_act_status" },
	{ 0x815cadec, "drm_edid_to_sad" },
	{ 0xd7a398fc, "drm_gem_map_detach" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xec31a103, "pm_genpd_remove_device" },
	{ 0xf1421d13, "drm_mode_sort" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x52e0db4b, "drm_encoder_init" },
	{ 0x35afae24, "__drm_puts_seq_file" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x2ffdbe9a, "drm_sched_entity_destroy" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6ca35f76, "drm_dp_mst_detect_port" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xe783b531, "drm_fb_helper_lastclose" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2657fe39, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x4527ed2e, "drm_plane_create_color_properties" },
	{ 0x3b664961, "pci_resize_resource" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfe7a8391, "drm_dp_cec_register_connector" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xfe12bcb9, "drm_dsc_compute_rc_parameters" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6661bd33, "drm_mode_vrefresh" },
	{ 0x282b2842, "drm_gem_object_put_unlocked" },
	{ 0x437247f7, "kthread_unpark" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x792cddf6, "drm_helper_force_disable_all" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x31a784f, "ttm_bo_evict_mm" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0xfc53008a, "amd_iommu_init_device" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x7f12d5a4, "drm_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x57bc19d2, "down_write" },
	{ 0xeb8e4a6b, "drm_dp_mst_hpd_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x955292de, "amd_iommu_unbind_pasid" },
	{ 0x270805fc, "drm_vma_node_allow" },
	{ 0x509ab5d7, "get_task_pid" },
	{ 0x763cd190, "drm_crtc_accurate_vblank_count" },
	{ 0x2a24cb46, "drm_syncobj_get_fd" },
	{ 0xe0caebc4, "drm_connector_register" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x42595e58, "vgacon_text_force" },
	{ 0x809712ff, "hdmi_avi_infoframe_pack" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x1000e51, "schedule" },
	{ 0x3ee960f3, "drm_modeset_unlock" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0xd77bffb8, "drm_helper_disable_unused_functions" },
	{ 0xb57ae103, "drm_kms_helper_poll_enable" },
	{ 0xdb70147d, "drm_dp_mst_put_port_malloc" },
	{ 0xfc8fc18a, "drm_atomic_helper_plane_destroy_state" },
	{ 0xe07a5581, "drm_atomic_helper_async_check" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xd49525f7, "drm_send_event_locked" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0xcf8afba1, "drm_atomic_state_alloc" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1aee0e13, "iommu_get_domain_for_dev" },
	{ 0xb15ab250, "dma_fence_array_create" },
	{ 0x7a3f493e, "ttm_bo_kmap" },
	{ 0x8e7faf32, "drm_primary_helper_destroy" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x6be1222d, "drm_crtc_cleanup" },
	{ 0xf8cde60, "get_task_mm" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x2971b6c9, "dma_resv_wait_timeout_rcu" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5a46ae88, "drm_dp_update_payload_part1" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x98acbe2f, "drm_dp_update_payload_part2" },
	{ 0x8f3bc999, "dma_resv_test_signaled_rcu" },
	{ 0x17ddfe9f, "drm_atomic_helper_suspend" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x177e58f0, "drm_dp_aux_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x9ae7dda8, "drm_connector_update_edid_property" },
	{ 0x9b53e14, "interval_tree_remove" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xb6127243, "drm_need_swiotlb" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x354d2a59, "drm_dp_mst_topology_mgr_resume" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x60539fe9, "drm_atomic_add_affected_planes" },
	{ 0x81a4a35, "drm_add_modes_noedid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcd51abe3, "drm_sched_entity_set_priority" },
	{ 0xb18c3eb2, "perf_pmu_register" },
	{ 0xbefb1a0e, "put_pid" },
	{ 0x1f15f485, "drm_fb_helper_cfb_fillrect" },
	{ 0x20645642, "drm_debug" },
	{ 0x40d2e151, "dma_resv_add_shared_fence" },
	{ 0x4198a952, "__drm_atomic_helper_connector_duplicate_state" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0x1aa3b53f, "drm_gem_dmabuf_vunmap" },
	{ 0xd449017b, "hmm_mirror_register" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x27374960, "drm_dp_mst_topology_mgr_init" },
	{ 0x2501225, "drm_dp_mst_get_edid" },
	{ 0x9d26bd10, "drm_crtc_enable_color_mgmt" },
	{ 0x491d5834, "drm_universal_plane_init" },
	{ 0x371b6689, "drm_connector_init_with_ddc" },
	{ 0x12b87679, "fd_install" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1a411479, "drm_syncobj_free" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x881e0352, "sysfs_remove_file_from_group" },
	{ 0xf154fa92, "vga_remove_vgacon" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0x3fa11c6, "drm_mode_is_420_only" },
	{ 0x5897922a, "drm_gem_object_lookup" },
	{ 0xe0a0cafe, "drm_atomic_helper_commit_hw_done" },
	{ 0xc4980c16, "drm_dp_dpcd_read" },
	{ 0xeaa5f763, "sg_alloc_table_from_pages" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfea86c7, "hmm_range_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf41530b7, "drm_connector_list_iter_begin" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4da41b21, "pci_ignore_hotplug" },
	{ 0x82109e14, "drm_fb_helper_initial_config" },
	{ 0x3bf1d802, "drm_dp_dpcd_write" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x6d60ef3b, "drm_dp_cec_unset_edid" },
	{ 0xd84a9eb3, "ttm_bo_bulk_move_lru_tail" },
	{ 0x55669d4b, "drm_object_attach_property" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x69786711, "__drm_atomic_helper_connector_destroy_state" },
	{ 0xfdfb792f, "amd_iommu_pc_supported" },
	{ 0x8aca3952, "ttm_bo_dma_acc_size" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0x1ada5ad3, "ttm_eu_reserve_buffers" },
	{ 0x7504b3b2, "drm_sched_start" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2538dd86, "drm_encoder_cleanup" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x13490f0f, "drm_gem_unmap_dma_buf" },
	{ 0x40eab978, "ttm_bo_kunmap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2418d88d, "ttm_bo_unlock_delayed_workqueue" },
	{ 0xe43d8f87, "__drm_atomic_helper_private_obj_duplicate_state" },
	{ 0x9b15c923, "drm_mode_create_scaling_mode_property" },
	{ 0x7fa34997, "drm_mode_config_cleanup" },
	{ 0x813c80f5, "ttm_fbdev_mmap" },
	{ 0xae277372, "__drm_crtc_commit_free" },
	{ 0x3fe38010, "pm_genpd_add_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe1992651, "ttm_unmap_and_unpopulate_pages" },
	{ 0x6889366e, "drm_atomic_helper_legacy_gamma_set" },
	{ 0x55aaf3a6, "drm_crtc_add_crc_entry" },
	{ 0x3795ed5d, "ttm_tt_bind" },
	{ 0x658518b8, "sysfs_add_file_to_group" },
	{ 0x1940f2e9, "ttm_bo_device_release" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb58f48a3, "use_mm" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5aa4a06e, "dma_resv_add_excl_fence" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xc66f4477, "drm_dev_unplug" },
	{ 0xbc5ab9ba, "drm_dp_mst_allocate_vcpi" },
	{ 0x5f401b47, "hmm_range_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x48bba76b, "to_drm_sched_fence" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1a14efd8, "ttm_bo_mmap" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16c66718, "drm_match_cea_mode" },
	{ 0xcba0674c, "drm_gem_dmabuf_release" },
	{ 0x5a4734d1, "drm_kms_helper_is_poll_worker" },
	{ 0x695b80b0, "__drm_atomic_helper_plane_reset" },
	{ 0xe437c150, "drm_dp_find_vcpi_slots" },
	{ 0x95a19931, "drm_dp_mst_dump_topology" },
	{ 0x6ce06cfd, "pcie_get_speed_cap" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0xe5c58e39, "drm_fb_helper_fill_info" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x6843e37f, "drm_crtc_send_vblank_event" },
	{ 0xd29b9e31, "drm_gem_prime_import" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0x2dcd8f37, "find_vma" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0x576b957, "ttm_dma_page_alloc_debugfs" },
	{ 0x9138208e, "ttm_dma_tt_fini" },
	{ 0x5fd43696, "drm_vma_node_revoke" },
	{ 0x6a72d8dc, "hmm_range_fault" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5b55e1a4, "pcie_capability_read_dword" },
	{ 0xe92c0ea0, "drm_fb_helper_ioctl" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xfa85b95c, "drm_atomic_helper_check_modeset" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xe49c9ba5, "drm_dp_cec_unregister_connector" },
	{ 0xc0522cdb, "drm_kms_helper_poll_init" },
	{ 0x83eddf0a, "node_data" },
	{ 0x481bd7a4, "drm_dp_stop_crc" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xb252980a, "drm_atomic_get_connector_state" },
	{ 0x1696e88d, "vga_client_register" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x20978fb9, "idr_find" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfa00081, "drm_dp_mst_topology_mgr_suspend" },
	{ 0xede2149c, "drm_color_lut_extract" },
	{ 0x68ef451e, "vga_switcheroo_fini_domain_pm_ops" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe34f7c4c, "dma_buf_get" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb3fcbe27, "drm_vblank_init" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x39ccf440, "drm_ioctl" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x7cf7bb52, "drm_sched_resubmit_jobs" },
	{ 0x9166fada, "strncpy" },
	{ 0x83598232, "drm_connector_init" },
	{ 0x2c09fd8a, "drm_gem_fb_destroy" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x6701f5d1, "amd_iommu_free_device" },
	{ 0x7ce40c42, "drm_debugfs_create_files" },
	{ 0xca669996, "fput" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x62c5722a, "ttm_bo_lock_delayed_workqueue" },
	{ 0x668b19a1, "down_read" },
	{ 0x292c9890, "ttm_bo_put" },
	{ 0x93369437, "drm_plane_create_alpha_property" },
	{ 0xfdece04e, "pid_task" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xfe01d957, "__get_task_comm" },
	{ 0xc2d8ed20, "drm_atomic_helper_shutdown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3aa4962b, "drm_calc_vbltimestamp_from_scanoutpos" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x3290fb69, "drm_connector_unregister" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x2bed3a52, "component_del" },
	{ 0xc2448345, "default_llseek" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x640bfc36, "drm_connector_attach_max_bpc_property" },
	{ 0x81ac1d7, "ttm_eu_backoff_reservation" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x944c43f, "node_states" },
	{ 0x42b6a7c2, "drm_helper_probe_single_connector_modes" },
	{ 0xab3dfa0e, "ttm_bo_move_accel_cleanup" },
	{ 0xf7ac2a86, "drm_connector_cleanup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbe04181, "vga_switcheroo_init_domain_pm_ops" },
	{ 0xdf6da59f, "pcie_bandwidth_available" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x1a63af34, "vga_switcheroo_process_delayed_switch" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x88ab6fe3, "kgdb_active" },
	{ 0x28201ebe, "drm_atomic_helper_cleanup_planes" },
	{ 0xebd6c021, "fget" },
	{ 0xcaed2f95, "ttm_page_alloc_debugfs" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1b1f96b4, "drm_sched_job_cleanup" },
	{ 0xcececeac, "drm_syncobj_get_handle" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8f41fd1c, "hmm_mirror_unregister" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0x214c1e9e, "drm_mode_probed_add" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x217362dd, "ww_mutex_lock" },
	{ 0x4ee53bea, "drm_framebuffer_init" },
	{ 0x33f0768c, "cpufreq_quick_get_max" },
	{ 0xcb94180f, "drm_dp_aux_register" },
	{ 0xa39281d5, "mmput" },
	{ 0xa4d3e5ca, "drm_sched_stop" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb26bf25d, "drm_mode_set_crtcinfo" },
	{ 0xb4491e70, "drm_connector_set_path_property" },
	{ 0x14cbb3e3, "amd_iommu_set_invalidate_ctx_cb" },
	{ 0xd84c2e79, "drm_atomic_helper_check_planes" },
	{ 0x51d58e8, "dma_fence_wait_any_timeout" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa1bedd72, "amd_iommu_pc_get_max_counters" },
	{ 0x64f8f336, "ttm_dma_populate" },
	{ 0xb45ffea4, "drm_atomic_helper_page_flip" },
	{ 0xa9c72303, "amd_iommu_pc_get_max_banks" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xa8a4358a, "drm_atomic_get_plane_state" },
	{ 0x81c51606, "drm_fb_helper_debug_leave" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x349cba85, "strchr" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x86cf653b, "ttm_bo_mem_space" },
	{ 0xfa4b36c0, "drm_dp_mst_connector_early_unregister" },
	{ 0xfdb71260, "drm_irq_install" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xa6ff9496, "drm_dp_link_train_clock_recovery_delay" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x5b2f27fb, "do_wait_intr" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x37a0cba, "kfree" },
	{ 0x76b71729, "ww_mutex_lock_interruptible" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0x29e52193, "pci_get_class" },
	{ 0xd96babb4, "interval_tree_iter_next" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x27a2416, "drm_syncobj_add_point" },
	{ 0xdd1bf945, "pcie_get_mps" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xed0de0b0, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x2f656722, "ttm_eu_fence_buffer_objects" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9af089e5, "drm_fb_helper_check_var" },
	{ 0x5748356e, "device_create_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x58d8fcaa, "drm_dsc_pps_payload_pack" },
	{ 0xd70aee2d, "ttm_bo_validate" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xcf7a410d, "drm_fb_helper_prepare" },
	{ 0x15d8aa41, "__drm_printfn_seq_file" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa47826e4, "drm_dp_calc_pbn_mode" },
	{ 0xd58d9e3b, "drm_poll" },
	{ 0x4253b0fa, "drm_gem_handle_create" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x16ac2597, "drm_printf" },
	{ 0xc9502317, "drm_dp_start_crc" },
	{ 0x7667cb01, "drm_mode_object_put" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x57e4c632, "drm_helper_hpd_irq_event" },
	{ 0x54214f7a, "drm_dp_mst_deallocate_vcpi" },
	{ 0x6e0bbabe, "drm_mm_print" },
	{ 0xefcc312f, "drm_atomic_helper_wait_for_flip_done" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x40a189e5, "drm_connector_list_iter_end" },
	{ 0x21ea5b56, "drm_sched_entity_flush" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0xb9035f53, "ttm_bo_device_init" },
	{ 0x5963e0af, "drm_fb_helper_pan_display" },
	{ 0x24052592, "drm_sched_entity_init" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xea124bd1, "gcd" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xba44787d, "vga_switcheroo_unregister_client" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2968d89f, "drm_helper_mode_fill_fb_struct" },
	{ 0x68c1e2dc, "dma_resv_get_fences_rcu" },
	{ 0x6dc65c0a, "sysfs_create_file_ns" },
	{ 0x912441de, "mmu_notifier_register" },
	{ 0x9d0c12b, "drm_dev_put" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0xc88ecd63, "ttm_bo_eviction_valuable" },
	{ 0xde44975d, "amd_iommu_bind_pasid" },
	{ 0x63c96e54, "drm_irq_uninstall" },
	{ 0x778906cb, "drm_dp_dpcd_read_link_status" },
	{ 0xa916b694, "strnlen" },
	{ 0x4b54a527, "drm_syncobj_find_fence" },
	{ 0x5287be92, "vga_switcheroo_register_handler" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x9f9b50fb, "ttm_bo_mem_put" },
	{ 0x73011db0, "drm_dp_bw_code_to_link_rate" },
	{ 0x969d6892, "pci_unmap_rom" },
	{ 0xf5234d50, "seq_hex_dump" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xce807a25, "up_write" },
	{ 0xbc23c364, "drm_atomic_add_affected_connectors" },
	{ 0xf16d58c7, "drm_crtc_vblank_off" },
	{ 0xdf03a337, "drm_atomic_helper_disable_plane" },
	{ 0x7a4ed889, "perf_event_update_userpage" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x53b954a2, "up_read" },
	{ 0x52c31fb4, "drm_gem_prime_fd_to_handle" },
	{ 0xd0bd487b, "hdmi_drm_infoframe_pack_only" },
	{ 0xeb4d6567, "drm_dp_mst_get_port_malloc" },
	{ 0x6bc7bb63, "ttm_bo_init_mm" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57f8a74e, "drm_open" },
	{ 0x727baddd, "drm_gem_object_release" },
	{ 0x32c7a01e, "dma_buf_put" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x597f57dd, "drm_crtc_helper_set_mode" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x5a921311, "strncmp" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x33be69f3, "drm_mode_config_init" },
	{ 0x67e84c91, "drm_fb_helper_alloc_fbi" },
	{ 0xdc0b5131, "drm_sched_job_init" },
	{ 0xa924aa43, "ttm_populate_and_map_pages" },
	{ 0xd3d43789, "drm_mode_crtc_set_gamma_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5f08363, "pci_map_rom" },
	{ 0xf64fea0, "vga_switcheroo_client_fb_set" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcb788232, "drm_sched_dependency_optimized" },
	{ 0xd8b0b053, "ttm_bo_pipeline_move" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x50451958, "drm_edid_to_speaker_allocation" },
	{ 0xbbd14ed9, "drm_atomic_commit" },
	{ 0x5c432fd2, "drm_connector_attach_vrr_capable_property" },
	{ 0xbc3909b2, "drm_gem_prime_handle_to_fd" },
	{ 0xe0c0d2e3, "ttm_bo_init_reserved" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe607256, "drm_plane_create_blend_mode_property" },
	{ 0x3d2e522c, "drm_sched_init" },
	{ 0xc5c99a79, "drm_dp_get_adjust_request_voltage" },
	{ 0x80500894, "request_firmware" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7a10df1f, "__drm_atomic_helper_connector_reset" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x81992424, "drm_edid_header_is_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3ce55751, "drm_sched_suspend_timeout" },
	{ 0x9f23a693, "vga_switcheroo_register_client" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xbbdb41d9, "ttm_sg_tt_init" },
	{ 0x7ee415d5, "single_open" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2bdd30, "perf_pmu_unregister" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0xe70408c1, "drm_crtc_vblank_count" },
	{ 0x439ee60c, "drm_sched_fault" },
	{ 0x582f248e, "drm_dp_get_adjust_request_pre_emphasis" },
	{ 0x39c97984, "ttm_bo_move_ttm" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x76d82aaf, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x26815dbc, "drm_dp_link_rate_to_bw_code" },
	{ 0x786c414a, "drm_sched_entity_push_job" },
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xa6b2271a, "drm_crtc_vblank_on" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xa5dc1340, "drm_gem_prime_export" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x13f26ae, "dma_fence_get_stub" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x57903345, "vm_mmap" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc8c3e496, "drm_cvt_mode" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x8d701329, "drm_dp_clock_recovery_ok" },
	{ 0xa96c72b2, "drm_prime_gem_destroy" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0x61225fb8, "drm_modeset_lock" },
	{ 0xdab5a1eb, "interval_tree_insert" },
	{ 0x34a5843, "drm_dev_alloc" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xe50f0f91, "drm_atomic_helper_resume" },
	{ 0xcadef538, "drm_vma_node_is_allowed" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x80c8fa04, "ttm_bo_manager_func" },
	{ 0x8e21c9a1, "dma_fence_add_callback" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0x2c586c22, "ttm_bo_move_memcpy" },
	{ 0x40185701, "i2c_bit_add_bus" },
	{ 0x24ee7185, "drm_atomic_get_crtc_state" },
	{ 0xbdae77f, "bpf_trace_run5" },
	{ 0xffd6b13e, "drm_gem_object_put" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x79a37c17, "bpf_trace_run6" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xa263787a, "drm_syncobj_create" },
	{ 0x7b1140f3, "drm_fb_helper_fini" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd1f60a89, "arch_io_free_memtype_wc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x96848186, "scnprintf" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x4a5c984d, "sync_file_create" },
	{ 0x96eed333, "drm_property_create_enum" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xb71a4554, "drm_atomic_helper_connector_destroy_state" },
	{ 0xca9360b5, "rb_next" },
	{ 0x43a9dffb, "mmu_notifier_put" },
	{ 0x3f4e1ffe, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x466723f, "drm_modeset_unlock_all" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x53be9e9f, "drm_dp_mst_topology_mgr_destroy" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x9434af17, "drm_atomic_helper_update_legacy_modeset_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdceeedc, "drm_gem_dmabuf_mmap" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x92890d3a, "ww_mutex_unlock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x3f7c3bc7, "ttm_bo_clean_mm" },
	{ 0x2711f1c0, "pcie_get_readrq" },
	{ 0xcfaa5c56, "drm_fb_helper_unregister_fbi" },
	{ 0xc5850110, "printk" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xe1992cc5, "ttm_bo_add_to_lru" },
	{ 0x2bbe4d4c, "__mmdrop" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x4297dbd5, "drm_fb_helper_output_poll_changed" },
	{ 0x69cf0088, "iommu_iova_to_phys" },
	{ 0x6aa3c338, "drm_get_format_info" },
	{ 0x9537cf77, "unuse_mm" },
	{ 0x4d14b2c8, "drm_connector_attach_encoder" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xc4216315, "amd_iommu_device_info" },
	{ 0xe1c87d44, "kthread_park" },
	{ 0x425189d1, "drm_mode_duplicate" },
	{ 0x6da45ff8, "drm_get_edid" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0xd8591f3a, "drm_gem_dmabuf_vmap" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e51cd74, "swiotlb_nr_tbl" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcee8a2c4, "drm_crtc_handle_vblank" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4d54f8c0, "drm_dp_mst_connector_late_register" },
	{ 0x844e785e, "drm_atomic_helper_update_plane" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xcce39874, "drm_fb_helper_setcmap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x44414d6f, "drm_modeset_lock_all_ctx" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x1ca91b79, "drm_is_current_master" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xedcf81ce, "drm_dp_channel_eq_ok" },
	{ 0xd35deaaa, "drm_dp_mst_reset_vcpi_slots" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x995eea5f, "drm_dp_mst_topology_mgr_set_mst" },
	{ 0xc267f6ca, "drm_atomic_private_obj_init" },
	{ 0xed3b6bc3, "drm_mode_is_420_also" },
};

MODULE_INFO(depends, "drm_kms_helper,drm,gpu-sched,ttm,amd_iommu_v2,i2c-algo-bit");

MODULE_ALIAS("pci:v00001002d00006780sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006784sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006788sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000678Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006790sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006791sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006792sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006798sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006799sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000679Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006623sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006631sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006823sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006824sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006826sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000682Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000683Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006667sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000666Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001305sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001307sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000130Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001313sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001316sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001317sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000131Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006658sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000665Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009832sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009833sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009836sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009837sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009838sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009839sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000983Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009851sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009852sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009853sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009854sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009855sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009856sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009857sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009858sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009859sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000985Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006901sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006907sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006929sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000692Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006938sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006939sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000730Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009874sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009875sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009876sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000098E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067FFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000067CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006FDFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006986sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006987sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006995sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006997sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000699Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000694Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006860sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006861sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006862sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006863sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006864sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006867sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006868sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00006869sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000686Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000687Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000069AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000066AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000738Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007312sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000731Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000734Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007362sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "684105D8707C50ACCDB6BFA");
