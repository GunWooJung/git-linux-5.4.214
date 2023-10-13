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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8cb91247, "pci_bus_read_config_byte" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x9170e150, "acpi_find_child_device" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x85bd1608, "__request_region" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00007113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000719Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00009463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004385sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000790Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d0000790Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000408sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1DE19B8293E50DD38D6F339");
