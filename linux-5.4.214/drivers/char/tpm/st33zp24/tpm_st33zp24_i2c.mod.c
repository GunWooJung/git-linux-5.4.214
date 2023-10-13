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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0xc5850110, "printk" },
	{ 0xc37326a1, "st33zp24_probe" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfeaa81d, "st33zp24_pm_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xff5647dc, "st33zp24_remove" },
	{ 0x147dffbf, "st33zp24_pm_resume" },
};

MODULE_INFO(depends, "tpm_st33zp24");

MODULE_ALIAS("acpi*:SMO3324:*");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2c");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2cC*");
MODULE_ALIAS("i2c:st33zp24-i2c");

MODULE_INFO(srcversion, "97B08A655EA0A4541A3716B");
