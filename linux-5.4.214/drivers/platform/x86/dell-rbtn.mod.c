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
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xff282521, "rfkill_register" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:DELRBTN:*");
MODULE_ALIAS("acpi*:DELLABCE:*");

MODULE_INFO(srcversion, "DCFBC8539677AB48B44248A");
