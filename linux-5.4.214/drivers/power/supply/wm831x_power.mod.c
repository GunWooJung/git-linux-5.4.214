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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xf40cb154, "devm_usb_get_phy_by_phandle" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xf8a00c0e, "wm831x_reg_lock" },
	{ 0x7c1a8902, "wm831x_reg_unlock" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0x6208eac7, "wm831x_auxadc_read_uv" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "79FA500B28A5794FA3BCF5C");
