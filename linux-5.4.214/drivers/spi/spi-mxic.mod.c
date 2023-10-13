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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3ef3230a, "spi_finalize_current_transfer" },
	{ 0xb7329c06, "clk_set_phase" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x30779a9, "spi_register_controller" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x6cac2f3b, "__devm_spi_alloc_controller" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmxicy,mx25f0a-spi");
MODULE_ALIAS("of:N*T*Cmxicy,mx25f0a-spiC*");

MODULE_INFO(srcversion, "B44A306D2765D64B355F29A");
