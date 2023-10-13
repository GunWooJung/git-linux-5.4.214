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
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0x7c364d18, "inv_mpu_pmops" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xa68dd7f0, "inv_mpu6050_set_power_itg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xd2f2ada0, "acpi_dev_get_resources" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1cfd266e, "inv_mpu_core_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0x904a8908, "regmap_write" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-mux,inv-mpu6050");

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");

MODULE_INFO(srcversion, "51C49B36C71F253C07C67BF");
