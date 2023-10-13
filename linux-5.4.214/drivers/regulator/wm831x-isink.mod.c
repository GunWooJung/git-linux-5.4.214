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
	{ 0x4c7d529f, "regulator_get_current_limit_regmap" },
	{ 0x15a4fa1a, "regulator_set_current_limit_regmap" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x7a73e605, "wm831x_isinkv_values" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0x7312a4ba, "regulator_unlock" },
	{ 0x1668d144, "regulator_notifier_call_chain" },
	{ 0x8c703d3e, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D6F51FC446CA9B7CFB2FB3C");
