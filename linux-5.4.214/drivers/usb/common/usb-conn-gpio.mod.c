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
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x87905dd6, "usb_role_switch_get" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1e72aaca, "gpiod_set_debounce" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x94c51c70, "regulator_is_enabled" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd5474690, "usb_role_switch_set_role" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc9fd634a, "usb_role_switch_put" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb594bd2f, "pinctrl_pm_select_sleep_state" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd1ec7ee7, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-usb-b-connector");
MODULE_ALIAS("of:N*T*Cgpio-usb-b-connectorC*");

MODULE_INFO(srcversion, "8BFA63386102661E4527F7C");
