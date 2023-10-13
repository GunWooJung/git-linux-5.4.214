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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xdeb089a7, "sysfs_remove_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrel,ks8995");
MODULE_ALIAS("of:N*T*Cmicrel,ks8995C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8864C*");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrel,ksz8795C*");
MODULE_ALIAS("spi:ks8995");
MODULE_ALIAS("spi:ksz8864");
MODULE_ALIAS("spi:ksz8795");

MODULE_INFO(srcversion, "D3B1B467214F23D6F83DA27");
