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
	{ 0xe844ef32, "agp_generic_type_to_mask_type" },
	{ 0x453cd94a, "agp_generic_destroy_pages" },
	{ 0x511771d1, "agp_generic_destroy_page" },
	{ 0x12f1b38a, "agp_generic_alloc_pages" },
	{ 0xdfaa9954, "agp_generic_alloc_page" },
	{ 0x583e60be, "agp_generic_free_by_type" },
	{ 0xc56cedfd, "agp_generic_alloc_by_type" },
	{ 0x34ee9c3d, "agp_generic_remove_memory" },
	{ 0x94dcabff, "agp_generic_insert_memory" },
	{ 0x54dd4067, "agp_generic_free_gatt_table" },
	{ 0xf9feaa07, "agp_generic_create_gatt_table" },
	{ 0xa4d4f0e6, "global_cache_flush" },
	{ 0x620e9a45, "agp_generic_mask_memory" },
	{ 0x3a2765e8, "agp_generic_enable" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7538b132, "agp_off" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe98ce5c4, "agp3_generic_tlbflush" },
	{ 0xc2424641, "agp3_generic_cleanup" },
	{ 0xde9b17ed, "agp3_generic_fetch_size" },
	{ 0x4b085dbf, "agp3_generic_configure" },
	{ 0x6d58f69e, "agp3_generic_sizes" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa48e7d51, "agp_add_bridge" },
	{ 0x5a27db41, "get_agp_version" },
	{ 0x6833a75d, "agp_alloc_bridge" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x4f587cb4, "pci_find_capability" },
	{ 0x483b35e, "agp_collect_device_status" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xe0a388bf, "pcibios_resource_to_bus" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x87cd4e0, "agp_bridge" },
	{ 0x330fa30, "agp_put_bridge" },
	{ 0x2553268f, "agp_remove_bridge" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");

MODULE_INFO(srcversion, "0CD5490997BD7B85310A45E");
