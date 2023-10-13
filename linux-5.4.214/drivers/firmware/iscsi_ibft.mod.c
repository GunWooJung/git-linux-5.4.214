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
	{ 0xccba6510, "iscsi_boot_create_acpitbl" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x21f6eefa, "iscsi_boot_create_target" },
	{ 0x1077b04c, "iscsi_boot_create_ethernet" },
	{ 0xca819e03, "iscsi_boot_create_initiator" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x729124ea, "iscsi_boot_create_kset" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xceed8318, "ibft_addr" },
	{ 0xbf1cda49, "iscsi_boot_destroy_kset" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_boot_sysfs");


MODULE_INFO(srcversion, "92621EDE464B9E4D7C689ED");
