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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x2fe9b3cd, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3fbc2bb8, "xt_register_targets" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe5eb72c9, "nf_dup_ipv4" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c9133fc, "nf_dup_ipv6" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv4,nf_dup_ipv6");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");
