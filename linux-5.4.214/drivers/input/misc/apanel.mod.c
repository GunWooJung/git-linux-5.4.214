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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0xc5850110, "printk" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0x60915a18, "input_allocate_polled_device" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xdcec59fc, "input_free_polled_device" },
	{ 0xc964a580, "input_unregister_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("i2c:fujitsu_apanel");

MODULE_INFO(srcversion, "FBDD0F20AF6F49F5C9C9066");
