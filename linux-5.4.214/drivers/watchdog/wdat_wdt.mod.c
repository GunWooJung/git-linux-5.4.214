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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x70648c92, "devm_watchdog_register_device" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0xec788566, "acpi_target_system_state" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F32626744C5FDCDA82EBE70");
