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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd37f6acd, "unregister_ip_vs_scheduler" },
	{ 0xda710bcf, "register_ip_vs_scheduler" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x3d2f0fb4, "ip_vs_scheduler_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcfd884a8, "__hsiphash_unaligned" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xea124bd1, "gcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "EEFAF99718393E14655C135");
