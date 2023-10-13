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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0x4f819a4f, "pci_bus_write_config_dword" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfc37562, "amd_smn_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xda60879, "node_to_amd_nb" },
	{ 0x81221cad, "amd_nb_num" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001573sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001493sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000144Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D94d00001463sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B3A0543431A0670937567D1");
