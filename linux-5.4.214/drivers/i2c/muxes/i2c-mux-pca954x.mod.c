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
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5748356e, "device_create_file" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0xbdc16e0e, "irq_domain_simple_ops" },
	{ 0xd7f7fb05, "i2c_get_device_id" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc54a076, "__i2c_smbus_xfer" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "76FE7E77C9AD5840DBE20C8");
