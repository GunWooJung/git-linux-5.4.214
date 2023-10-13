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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc466e83f, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe484e35f, "ioread32" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8c039e40, "serio_unregister_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C2427DEFE3FCB73696FFA86");
