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
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe692cb26, "extcon_set_state_sync" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT3496:*");

MODULE_INFO(srcversion, "64738E32956F944AF8CCA97");
