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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x7e4d52be, "xfrm6_tunnel_deregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3f5f187c, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd523d85d, "skb_push" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa8ba7f04, "xfrm_state_flush" },
	{ 0xdf79e0b3, "xfrm_register_type" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xfb25a8da, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x35081cb2, "xfrm6_tunnel_register" },
};

MODULE_INFO(depends, "tunnel6");


MODULE_INFO(srcversion, "721607F64C5B0E402A23B91");
