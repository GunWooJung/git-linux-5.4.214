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
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xad263612, "consume_skb" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xd523d85d, "skb_push" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x410ecd8a, "vcc_process_recv_queue" },
	{ 0x6f395e65, "__module_get" },
	{ 0xaf87d51c, "ppp_register_channel" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x2f2c7efb, "ppp_unit_number" },
	{ 0x709ba1c2, "ppp_channel_index" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa9ea168, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x36a6c96a, "ppp_input_error" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb9b087e, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb9ab629, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");
