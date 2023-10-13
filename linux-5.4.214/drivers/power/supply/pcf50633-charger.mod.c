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
	{ 0x6e9f5e66, "pcf50633_reg_write" },
	{ 0xe643c8a0, "pcf50633_reg_set_bit_mask" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9c4384d4, "pcf50633_free_irq" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9489c2ee, "pcf50633_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xd15f1b26, "pcf50633_register_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6b001e0c, "pcf50633_reg_clear_bits" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "070845CBE8FD6E0B735CA36");
