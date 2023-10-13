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
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x5fb88a3, "devm_usb_get_phy" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xf44ddfd2, "iio_channel_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0x53cf32c4, "da9150_set_bits" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x3ea19fdf, "da9150_reg_read" },
	{ 0x68e9cf5d, "iio_channel_release" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,da9150-core");


MODULE_INFO(srcversion, "C6E8E562C590B2F90BEBF9B");
