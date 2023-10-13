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
	{ 0x765395c3, "param_ops_int" },
	{ 0x38735fc3, "edac_mc_del_mc" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0xa6d6649c, "edac_mc_free" },
	{ 0x926aaad2, "edac_mc_add_mc_with_groups" },
	{ 0x6ff9d253, "edac_mc_alloc" },
	{ 0xe65f7d31, "pci_find_bus" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5ab09745, "edac_get_owner" },
	{ 0x4e91a072, "edac_get_report_status" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xac3e49e1, "edac_mc_handle_error" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c8f9160, "pci_bus_write_config_byte" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0xc2100650, "pci_bus_write_config_word" },
	{ 0x4f819a4f, "pci_bus_write_config_dword" },
	{ 0x2d9ae16, "pci_bus_read_config_word" },
	{ 0x8cb91247, "pci_bus_read_config_byte" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005F:feature:*");

MODULE_INFO(srcversion, "9BED4343D282B4FC7426B3F");
