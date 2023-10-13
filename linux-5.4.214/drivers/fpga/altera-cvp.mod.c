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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x32302331, "driver_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0x4c99581b, "driver_create_file" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xaa8565d5, "fpga_mgr_register" },
	{ 0x67d846f8, "devm_fpga_mgr_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb2eb4b30, "pci_find_next_ext_capability" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x13819104, "fpga_mgr_unregister" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("pci:v00001172d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADF7E1B4B606CB312A936C6");
