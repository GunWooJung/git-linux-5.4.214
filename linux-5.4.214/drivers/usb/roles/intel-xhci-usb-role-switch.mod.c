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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa805ecfc, "acpi_release_global_lock" },
	{ 0xc9f34c1d, "acpi_acquire_global_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x42789434, "usb_role_switch_register" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xf29cdf27, "software_node_register" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x946d1e6c, "software_node_fwnode" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:intel_xhci_usb_sw");

MODULE_INFO(srcversion, "366FCEEC632F329C43F8214");
