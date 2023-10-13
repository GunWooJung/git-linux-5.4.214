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
	{ 0xb51fbd64, "edac_op_state" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf1e5b940, "edac_pci_create_generic_ctl" },
	{ 0x926aaad2, "edac_mc_add_mc_with_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x6ff9d253, "edac_mc_alloc" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xac3e49e1, "edac_mc_handle_error" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xa6d6649c, "edac_mc_free" },
	{ 0x38735fc3, "edac_mc_del_mc" },
	{ 0x15370950, "edac_pci_release_generic_ctl" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000025F0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "546A3EE7E983B0051B027C8");
