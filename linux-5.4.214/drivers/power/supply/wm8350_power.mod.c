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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x515bbcca, "wm8350_set_bits" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5748356e, "device_create_file" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xae9b43b3, "wm8350_reg_lock" },
	{ 0xddad2ee, "wm8350_reg_write" },
	{ 0xcc1d7507, "wm8350_reg_unlock" },
	{ 0x114099d6, "wm8350_read_auxadc" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97906665, "wm8350_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F48C31E3BB8DE412FCC1EAF");
