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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd523d85d, "skb_push" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0xba505b9b, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A4AB9E7090438580206A84");
