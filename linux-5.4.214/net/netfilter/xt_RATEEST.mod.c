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
	{ 0xc8dbe1c6, "xt_unregister_target" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa8ae0069, "xt_register_target" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "C7251454E02D0D941AC9A8A");
