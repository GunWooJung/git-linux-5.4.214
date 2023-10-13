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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x2793bf02, "power_supply_set_property" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x28d6de3f, "pm860x_reg_read" },
	{ 0xc5915462, "pm860x_bulk_read" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdc9abbc5, "power_supply_put" },
	{ 0x70e399cc, "power_supply_get_property" },
	{ 0x5c9ec15b, "power_supply_get_by_name" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xcb045c8, "pm860x_set_bits" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa41a2f24, "pm860x_reg_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9F90738F466D99BA3E5D84");
