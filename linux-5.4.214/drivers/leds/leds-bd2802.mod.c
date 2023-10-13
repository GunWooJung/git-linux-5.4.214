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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:BD2802");

MODULE_INFO(srcversion, "EB061A2AF8ACE10D14B08F1");
