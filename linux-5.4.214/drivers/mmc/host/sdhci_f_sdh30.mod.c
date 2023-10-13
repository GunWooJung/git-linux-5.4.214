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
	{ 0x46fa96de, "sdhci_set_uhs_signaling" },
	{ 0x8076132, "sdhci_set_bus_width" },
	{ 0xe0c73956, "sdhci_set_clock" },
	{ 0x9e4f6f98, "sdhci_pltfm_pmops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1bb76e14, "sdhci_reset" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdf25be12, "sdhci_add_host" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xa72adc36, "mmc_of_parse" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xd7e53063, "sdhci_alloc_host" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xafdaeb2c, "sdhci_free_host" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x487ebde6, "sdhci_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sdhci,sdhci-pltfm");

MODULE_ALIAS("acpi*:SCX0002:*");

MODULE_INFO(srcversion, "E06D559BD0FE952D5377DA1");
