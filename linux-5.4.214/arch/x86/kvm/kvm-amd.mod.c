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
	{ 0x67fdc35, "reset_shadow_zero_bits_mask" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82aa4a07, "kvm_complete_insn_gp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2c2f5a09, "x86_family" },
	{ 0xa6a4f54e, "kvm_mmu_load" },
	{ 0x98130ab, "kvm_skip_emulated_instruction" },
	{ 0x20419360, "kvm_require_dr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x15f5cf6a, "__tracepoint_kvm_nested_vmexit_inject" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x843d6541, "sev_guest_decommission" },
	{ 0x17add64b, "gdt_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x526f6485, "perf_event_release_kernel" },
	{ 0x1a3e3440, "kvm_intr_is_single_vcpu" },
	{ 0xbc163b08, "kvm_set_msr_common" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x3ad3b2e9, "kvm_fast_pio" },
	{ 0x3de44db, "kvm_mmu_invlpg" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0xb26a4a90, "kvm_vcpu_init" },
	{ 0x98e6ea3b, "kvm_emulate_wrmsr" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe1bf0a93, "kvm_emulate_cpuid" },
	{ 0x888d979f, "__tracepoint_kvm_exit" },
	{ 0xad2951a9, "ex_handler_rdmsr_unsafe" },
	{ 0x50183e50, "current_vcpu" },
	{ 0x6de3c0fc, "kvm_queue_exception_e" },
	{ 0x52bf758d, "kvm_get_rflags" },
	{ 0x75b305b1, "kvm_vcpu_wake_up" },
	{ 0xa2926e9d, "set_page_dirty_lock" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd02e197f, "sev_platform_init" },
	{ 0xb2714601, "kvm_vcpu_on_spin" },
	{ 0x8b4261eb, "kvm_cpuid" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc7602f36, "kvm_vcpu_read_guest" },
	{ 0x187a4ecd, "__tracepoint_read_msr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x65cfe455, "kvm_mmu_reset_context" },
	{ 0x25db1577, "do_trace_write_msr" },
	{ 0x134ce9ff, "ex_handler_clear_fs" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x84f3f229, "kvm_emulate_instruction" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xe1f2576e, "kvm_put_guest_xcr0" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc898acde, "kvm_mmu_page_fault" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb097e540, "__tracepoint_kvm_nested_intercepts" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x500bce9a, "kvm_get_dr" },
	{ 0x94abbd88, "__tracepoint_kvm_invlpga" },
	{ 0xd4ac95d8, "kvm_set_cr8" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x67751041, "kvm_set_cr0" },
	{ 0x2f09fda, "__x86_set_memory_region" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xec06defc, "__tracepoint_kvm_avic_unaccelerated_access" },
	{ 0x2d82cc24, "kvm_spec_ctrl_test_value" },
	{ 0xae7222a8, "kvm_get_cs_db_l_bits" },
	{ 0xa50e7dc1, "kvm_handle_page_fault" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd32151ad, "kvm_set_cr4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x28411ed7, "kvm_max_tsc_scaling_ratio" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfa5deb6d, "kvm_vcpu_read_guest_page" },
	{ 0xe3ccde2b, "x86_fpu_cache" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xd19bd2e1, "__tracepoint_write_msr" },
	{ 0x91722dce, "sev_platform_status" },
	{ 0xe52bf850, "load_pdptrs" },
	{ 0x68f54e0f, "__tracepoint_kvm_skinit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xd0459e67, "kvm_has_tsc_control" },
	{ 0xc5850110, "printk" },
	{ 0x709cd8cb, "kvm_spurious_fault" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x5fdfa2c1, "amd_pmu_enable_virt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x7ea91579, "kvm_emulate_hypercall" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x30b80a44, "kvm_set_msi_irq" },
	{ 0x8ee39130, "kvm_set_dr" },
	{ 0x3e1f72e0, "kvm_vcpu_cache" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbfd4ee51, "kvm_is_linear_rip" },
	{ 0xdbe2ff45, "kvm_x86_ops" },
	{ 0x6636c3c9, "irq_set_vcpu_affinity" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xe3c6623e, "kvm_get_cr8" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x104a20cc, "kvm_set_cr3" },
	{ 0x3a186c23, "kvm_emulate_wbinvd" },
	{ 0x73a9075c, "kvm_emulate_instruction_from_buffer" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x2410c338, "x86_virt_spec_ctrl" },
	{ 0x2e6a6147, "psp_copy_user_blob" },
	{ 0xca669996, "fput" },
	{ 0xfa541ffc, "__tracepoint_kvm_inj_virq" },
	{ 0xf0540d2d, "release_pages" },
	{ 0x2e2df7f4, "irq_remapping_cap" },
	{ 0x4073e924, "sev_guest_deactivate" },
	{ 0xbfc61ecf, "__tracepoint_kvm_page_fault" },
	{ 0x8038fa1, "mark_page_accessed" },
	{ 0x1235000a, "kvm_tsc_scaling_ratio_frac_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc90e8f77, "kvm_set_rflags" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x65e44991, "kvm_lapic_reg_write" },
	{ 0xc1d769b7, "__tracepoint_kvm_nested_intr_vmexit" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x1bd86562, "kvm_vcpu_unmap" },
	{ 0x8fac14a2, "sev_guest_df_flush" },
	{ 0xd8ae2ac3, "__tracepoint_kvm_pi_irte_update" },
	{ 0x4c65ab0e, "kvm_vcpu_is_reset_bsp" },
	{ 0xcab0c0a4, "__tracepoint_kvm_write_tsc_offset" },
	{ 0x6b6d856f, "kvm_emulate_rdmsr" },
	{ 0x6f4bb86a, "cpu_tlbstate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b292540, "kvm_queue_exception" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xcfe3db32, "kvm_init_shadow_mmu" },
	{ 0x42313219, "kvm_read_and_reset_pf_reason" },
	{ 0xa855e140, "kvm_requeue_exception_e" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x22de4931, "amd_iommu_register_ga_log_notifier" },
	{ 0xaaf935, "kvm_disable_tdp" },
	{ 0xc298f297, "kvm_load_guest_xcr0" },
	{ 0x6ada8f59, "kvm_mmu_set_mmio_spte_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8ce4f3ab, "kvm_enable_tdp" },
	{ 0x39e3c030, "do_trace_read_msr" },
	{ 0x508c670, "kvm_task_switch" },
	{ 0x7cf0f6c2, "kvm_find_cpuid_entry" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3855b138, "perf_event_read_value" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xec6019fd, "sev_issue_cmd_external_user" },
	{ 0xd80abdd1, "kvm_mtrr_valid" },
	{ 0x67167421, "reprogram_gp_counter" },
	{ 0xd829cd2, "kvm_wait_lapic_expire" },
	{ 0x9743e477, "kvm_set_xcr" },
	{ 0xb8b4f2ce, "kvm_lapic_find_highest_irr" },
	{ 0x219d745, "kvm_vcpu_map" },
	{ 0x8f38d383, "ex_handler_default" },
	{ 0x598e8a17, "__tracepoint_kvm_nested_vmrun" },
	{ 0x7bd995e8, "kvm_emulate_halt" },
	{ 0x6340434e, "x86_model" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x1e90e324, "kvm_vcpu_uninit" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f33b770, "smp_ops" },
	{ 0x90d1c49e, "kvm_get_msr_common" },
	{ 0xd5c4538f, "handle_ud" },
	{ 0xf47e3dba, "kvm_no_apic_vcpu" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa38f21b9, "amd_iommu_update_ga" },
	{ 0x8885a004, "__kvm_request_immediate_exit" },
	{ 0xb761318b, "sev_active" },
	{ 0x1d013832, "kvm_enable_efer_bits" },
	{ 0x1db1c372, "enable_vmware_backdoor" },
	{ 0x91d4d992, "__tracepoint_kvm_nested_vmexit" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x86931b5d, "__tracepoint_kvm_avic_incomplete_ipi" },
	{ 0xfa3e362c, "kvm_deliver_exception_payload" },
	{ 0x749019a, "kvm_init" },
	{ 0x27046576, "kvm_exit" },
	{ 0x1ba237b0, "default_cpu_present_to_apicid" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3e059f28, "sev_guest_activate" },
	{ 0xe9dad0a5, "kvm_requeue_exception" },
	{ 0x18582826, "amd_pmu_disable_virt" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0x7d58a2a3, "kvm_apic_match_dest" },
	{ 0x50bf66d7, "kvm_rdpmc" },
	{ 0x33df7f9a, "kvm_arch_has_assigned_device" },
	{ 0xca3ab5ad, "__tracepoint_kvm_ple_window_update" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "kvm,ccp");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00C2*");

MODULE_INFO(srcversion, "FE63E8C9E8202771C082160");
