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
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xc37326a1, "st33zp24_probe" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfeaa81d, "st33zp24_pm_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xff5647dc, "st33zp24_remove" },
	{ 0x147dffbf, "st33zp24_pm_resume" },
};

MODULE_INFO(depends, "tpm_st33zp24");

MODULE_ALIAS("of:N*T*Cst,st33zp24-spi");
MODULE_ALIAS("of:N*T*Cst,st33zp24-spiC*");
MODULE_ALIAS("spi:st33zp24-spi");
MODULE_ALIAS("acpi*:SMO3324:*");

MODULE_INFO(srcversion, "3C0DEA86FB13AE6BD2BB592");
