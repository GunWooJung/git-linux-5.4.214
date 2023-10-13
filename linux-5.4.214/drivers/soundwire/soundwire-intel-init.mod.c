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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe4356da0, "fwnode_property_read_u8_array" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F56A54F461D5200FC6709A2");
