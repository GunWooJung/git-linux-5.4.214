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
	{ 0xc42bb9d2, "ndlc_probe" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x6f60ad96, "ndlc_recv" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0x586583b8, "spi_sync" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x29d9b8cf, "ndlc_remove" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x61853e9a, "device_property_present" },
};

MODULE_INFO(depends, "st-nci");

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spi");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spiC*");
MODULE_ALIAS("spi:st_nci_spi");

MODULE_INFO(srcversion, "8B67D863C437884A785B1FD");
