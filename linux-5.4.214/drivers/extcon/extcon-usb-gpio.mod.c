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
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1e72aaca, "gpiod_set_debounce" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xb594bd2f, "pinctrl_pm_select_sleep_state" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd1ec7ee7, "pinctrl_pm_select_default_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpioC*");

MODULE_INFO(srcversion, "C0D9C2ADFD2E98A55655502");
