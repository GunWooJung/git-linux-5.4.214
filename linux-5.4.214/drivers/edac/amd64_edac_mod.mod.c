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
	{ 0x81221cad, "amd_nb_num" },
	{ 0x926aaad2, "edac_mc_add_mc_with_groups" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda60879, "node_to_amd_nb" },
	{ 0x3441445f, "msrs_free" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x15370950, "edac_pci_release_generic_ctl" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf5a5c84c, "msrs_alloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf05c32ad, "rdmsr_on_cpus" },
	{ 0xac3e49e1, "edac_mc_handle_error" },
	{ 0x14878009, "amd_report_gart_errors" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x830c469f, "amd_register_ecc_decoder" },
	{ 0xa6d6649c, "edac_mc_free" },
	{ 0xf4a565fd, "wrmsr_on_cpus" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x6ff9d253, "edac_mc_alloc" },
	{ 0xf1e5b940, "edac_pci_create_generic_ctl" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0x3247f79b, "find_mci_by_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0xd919806a, "amd_cache_northbridges" },
	{ 0xaf761418, "amd_unregister_ecc_decoder" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xc3c75020, "edac_mc_find" },
	{ 0x38735fc3, "edac_mc_del_mc" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa9854364, "umc_normaddr_to_sysaddr" },
	{ 0xefeafcf1, "edac_has_mcs" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x5ab09745, "edac_get_owner" },
};

MODULE_INFO(depends, "edac_mce_amd");

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0010mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0015mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0016mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0002fam0017mod*:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0009fam0018mod*:feature:*");

MODULE_INFO(srcversion, "E2B7D1B104BFF5478991D5E");
