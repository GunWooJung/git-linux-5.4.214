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
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x5748356e, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa916b694, "strnlen" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adm1032");
MODULE_ALIAS("of:N*T*Cadi,adm1032C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461");
MODULE_ALIAS("of:N*T*Cadi,adt7461C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461a");
MODULE_ALIAS("of:N*T*Cadi,adt7461aC*");
MODULE_ALIAS("of:N*T*Cgmt,g781");
MODULE_ALIAS("of:N*T*Cgmt,g781C*");
MODULE_ALIAS("of:N*T*Cnational,lm90");
MODULE_ALIAS("of:N*T*Cnational,lm90C*");
MODULE_ALIAS("of:N*T*Cnational,lm86");
MODULE_ALIAS("of:N*T*Cnational,lm86C*");
MODULE_ALIAS("of:N*T*Cnational,lm89");
MODULE_ALIAS("of:N*T*Cnational,lm89C*");
MODULE_ALIAS("of:N*T*Cnational,lm99");
MODULE_ALIAS("of:N*T*Cnational,lm99C*");
MODULE_ALIAS("of:N*T*Cdallas,max6646");
MODULE_ALIAS("of:N*T*Cdallas,max6646C*");
MODULE_ALIAS("of:N*T*Cdallas,max6647");
MODULE_ALIAS("of:N*T*Cdallas,max6647C*");
MODULE_ALIAS("of:N*T*Cdallas,max6649");
MODULE_ALIAS("of:N*T*Cdallas,max6649C*");
MODULE_ALIAS("of:N*T*Cdallas,max6654");
MODULE_ALIAS("of:N*T*Cdallas,max6654C*");
MODULE_ALIAS("of:N*T*Cdallas,max6657");
MODULE_ALIAS("of:N*T*Cdallas,max6657C*");
MODULE_ALIAS("of:N*T*Cdallas,max6658");
MODULE_ALIAS("of:N*T*Cdallas,max6658C*");
MODULE_ALIAS("of:N*T*Cdallas,max6659");
MODULE_ALIAS("of:N*T*Cdallas,max6659C*");
MODULE_ALIAS("of:N*T*Cdallas,max6680");
MODULE_ALIAS("of:N*T*Cdallas,max6680C*");
MODULE_ALIAS("of:N*T*Cdallas,max6681");
MODULE_ALIAS("of:N*T*Cdallas,max6681C*");
MODULE_ALIAS("of:N*T*Cdallas,max6695");
MODULE_ALIAS("of:N*T*Cdallas,max6695C*");
MODULE_ALIAS("of:N*T*Cdallas,max6696");
MODULE_ALIAS("of:N*T*Cdallas,max6696C*");
MODULE_ALIAS("of:N*T*Connn,nct1008");
MODULE_ALIAS("of:N*T*Connn,nct1008C*");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771C*");
MODULE_ALIAS("of:N*T*Cnxp,sa56004");
MODULE_ALIAS("of:N*T*Cnxp,sa56004C*");
MODULE_ALIAS("of:N*T*Cti,tmp451");
MODULE_ALIAS("of:N*T*Cti,tmp451C*");
MODULE_ALIAS("of:N*T*Cti,tmp461");
MODULE_ALIAS("of:N*T*Cti,tmp461C*");
MODULE_ALIAS("i2c:adm1032");
MODULE_ALIAS("i2c:adt7461");
MODULE_ALIAS("i2c:adt7461a");
MODULE_ALIAS("i2c:g781");
MODULE_ALIAS("i2c:lm90");
MODULE_ALIAS("i2c:lm86");
MODULE_ALIAS("i2c:lm89");
MODULE_ALIAS("i2c:lm99");
MODULE_ALIAS("i2c:max6646");
MODULE_ALIAS("i2c:max6647");
MODULE_ALIAS("i2c:max6649");
MODULE_ALIAS("i2c:max6654");
MODULE_ALIAS("i2c:max6657");
MODULE_ALIAS("i2c:max6658");
MODULE_ALIAS("i2c:max6659");
MODULE_ALIAS("i2c:max6680");
MODULE_ALIAS("i2c:max6681");
MODULE_ALIAS("i2c:max6695");
MODULE_ALIAS("i2c:max6696");
MODULE_ALIAS("i2c:nct1008");
MODULE_ALIAS("i2c:w83l771");
MODULE_ALIAS("i2c:sa56004");
MODULE_ALIAS("i2c:tmp451");
MODULE_ALIAS("i2c:tmp461");

MODULE_INFO(srcversion, "4FCEF33CD026EB879B06EE8");
