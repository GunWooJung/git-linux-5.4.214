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
	{ 0xb78ff901, "mipi_dsi_driver_unregister" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xfd8edc1c, "mipi_dsi_driver_register_full" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x150d8d0c, "mipi_dsi_attach" },
	{ 0xfd48c5cd, "mipi_dsi_device_unregister" },
	{ 0xede94ffc, "drm_panel_remove" },
	{ 0x645914d, "mipi_dsi_detach" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "381B4D1C392019CA346FB48");
