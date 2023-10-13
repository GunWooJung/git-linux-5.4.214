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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xcfb5c64c, "slim_driver_unregister" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xba231299, "__slim_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,slimbus");


MODULE_INFO(srcversion, "3EE3D14D720A63F492E433D");
