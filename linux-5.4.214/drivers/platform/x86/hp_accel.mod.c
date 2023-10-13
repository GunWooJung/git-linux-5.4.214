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
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xfa1b15d7, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x96c3d9bb, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x142794db, "lis3lv02d_remove_fs" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xbbcee3b5, "lis3lv02d_joystick_disable" },
	{ 0xe2ee81dc, "i8042_remove_filter" },
	{ 0x9d1f37e7, "lis3lv02d_poweroff" },
	{ 0xe7db0ab2, "lis3lv02d_poweron" },
	{ 0xf30de827, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lis3lv02d");

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "15E0005E5E51224A0827BF4");
