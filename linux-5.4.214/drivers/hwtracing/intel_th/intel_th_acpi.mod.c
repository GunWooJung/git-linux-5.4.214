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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc0988cc1, "intel_th_alloc" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e70859c, "intel_th_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "intel_th");

MODULE_ALIAS("acpi*:INTC1000:*");
MODULE_ALIAS("acpi*:INTC1001:*");

MODULE_INFO(srcversion, "EAE236F77A639F9E1F16049");
