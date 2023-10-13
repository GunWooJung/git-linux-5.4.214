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
	{ 0x5aa9cfac, "ssp_common_buffer_postdisable" },
	{ 0xbfc9c575, "ssp_common_buffer_postenable" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd8410c19, "ssp_get_sensor_delay" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5ea78d4b, "ssp_change_delay" },
	{ 0xa646cdb2, "ssp_register_consumer" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xa1b7f476, "iio_device_attach_buffer" },
	{ 0x5cdf37eb, "devm_iio_kfifo_allocate" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xecb18b7b, "ssp_common_process_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ssp_iio,sensorhub,industrialio,kfifo_buf");


MODULE_INFO(srcversion, "C131F8CF7BC2810777FF01B");
