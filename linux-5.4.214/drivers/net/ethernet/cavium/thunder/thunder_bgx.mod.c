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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb7f6046, "acpi_get_devices" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x5fd2de91, "phy_start" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcd550e9d, "fwnode_get_mac_address" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xdfb7f21b, "pci_request_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x2ab81d97, "pci_free_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x4f739dc0, "xcv_setup_link" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13912e4b, "xcv_init_hw" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "thunder_xcv");

MODULE_ALIAS("pci:v0000177Dd0000A026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd0000A054sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D16BF83C65A2F63E1A117F");
