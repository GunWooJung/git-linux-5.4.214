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
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x849c8990, "typec_register_port" },
	{ 0x81188c30, "match_string" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x493159cc, "typec_partner_set_identity" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x5ac3a632, "typec_set_vconn_role" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec");

MODULE_ALIAS("i2c:tps6598x");

MODULE_INFO(srcversion, "D4EF37B4E3AC05AE35279F7");
