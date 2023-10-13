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
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x25dce5c9, "m_can_class_register" },
	{ 0x82c132d7, "m_can_init_ram" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x7a47b126, "platform_get_resource_byname" },
	{ 0xcfb7b2f0, "m_can_class_get_clocks" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xebd3fc82, "m_can_class_allocate_dev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x71a99371, "m_can_class_unregister" },
	{ 0x92e81508, "m_can_class_suspend" },
	{ 0x9aa634bb, "m_can_class_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "m_can");

MODULE_ALIAS("of:N*T*Cbosch,m_can");
MODULE_ALIAS("of:N*T*Cbosch,m_canC*");

MODULE_INFO(srcversion, "95D738C6D17E9BB7B89A484");
