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
	{ 0x9a4c322, "_dev_err" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xe8516149, "platform_get_irq_optional" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x848d372e, "iowrite8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf10de535, "ioread8" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3E8C376D8396CBDD05F26D3");
