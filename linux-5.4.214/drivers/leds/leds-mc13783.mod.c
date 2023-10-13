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
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbaa31e69, "mc13xxx_reg_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x92fd7837, "mc13xxx_reg_rmw" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-led");
MODULE_ALIAS("platform:mc13892-led");
MODULE_ALIAS("platform:mc34708-led");

MODULE_INFO(srcversion, "93B3D6CE45A959EBA661ED1");
