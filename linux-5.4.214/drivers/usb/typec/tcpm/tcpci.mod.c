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
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xea220941, "tcpm_tcpc_reset" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8650673e, "tcpm_register_port" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:tcpci");

MODULE_INFO(srcversion, "F911407E10342FC8EE23193");
