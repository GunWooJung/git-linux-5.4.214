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
	{ 0xfefc13c7, "intel_soc_dts_iosf_exit" },
	{ 0x7b5452b8, "acpi_unregister_gsi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xabc4d76, "intel_soc_dts_iosf_add_read_only_critical_trip" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0xe1fa50d0, "acpi_register_gsi" },
	{ 0xb23b6c46, "intel_soc_dts_iosf_init" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x45422a4b, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_soc_dts_iosf");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0037:feature:*");

MODULE_INFO(srcversion, "68986C667336100879F8402");
