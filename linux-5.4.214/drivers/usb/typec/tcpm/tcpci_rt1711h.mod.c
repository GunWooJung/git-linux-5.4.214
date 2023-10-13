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
	{ 0x9a4c322, "_dev_err" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x67617922, "tcpci_register_port" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x6f497a3c, "tcpci_irq" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0xc529e32e, "tcpci_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcpci");

MODULE_ALIAS("i2c:rt1711h");

MODULE_INFO(srcversion, "2C77B46A3B9BECD11A9AE01");
