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
	{ 0x27753bf5, "mei_cldev_driver_unregister" },
	{ 0x3555681e, "__mei_cldev_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3b771659, "component_master_add_with_match" },
	{ 0xc5f1c3a0, "component_match_add_typed" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8d513470, "mei_cldev_enable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43f55a0c, "mei_cldev_recv" },
	{ 0x1b7dc067, "mei_cldev_send" },
	{ 0xe49f77bb, "component_bind_all" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8d28a5bd, "component_unbind_all" },
	{ 0x13a9bcef, "mei_cldev_disable" },
	{ 0xfa159166, "mei_cldev_set_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x775473fc, "component_master_del" },
	{ 0x56a61ea2, "mei_cldev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("mei:*:b638ab7e-94e2-4ea2-a552-d1c54b627f04:*:*");

MODULE_INFO(srcversion, "604EADB816C38ABA40B9C1C");
