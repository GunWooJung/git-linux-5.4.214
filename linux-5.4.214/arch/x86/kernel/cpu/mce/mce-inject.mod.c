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
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xda60879, "node_to_amd_nb" },
	{ 0x76d951cd, "mce_inject_log" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x754d539c, "strlen" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe0c77bb5, "mce_notify_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbb13595e, "smp_call_function_many" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd1f6c5f3, "smp_num_siblings" },
	{ 0x738fe32b, "amd_get_nodes_per_socket" },
	{ 0x5a921311, "strncmp" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x4fac98a7, "machine_check_poll" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5f56663b, "rdmsrl_on_cpu" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0x1aff3d55, "mce_register_injector_chain" },
	{ 0xc7e1cc1c, "injectm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7127da7, "mce_unregister_injector_chain" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xadb8f873, "do_machine_check" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x53c47c53, "apic" },
	{ 0x77bc13a0, "strim" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x211130c1, "alloc_cpumask_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3B20F63EB9A22A829A7268");
