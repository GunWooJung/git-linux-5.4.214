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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x161dfeca, "ac97_bus_type" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "ac97_bus");


MODULE_INFO(srcversion, "6D2D7DB7B60AB8FC8075D16");
