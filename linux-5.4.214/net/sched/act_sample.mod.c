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
	{ 0x84ebc80a, "tcf_unregister_action" },
	{ 0xcbd937db, "tcf_register_action" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x60254979, "psample_sample_packet" },
	{ 0xd523d85d, "skb_push" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a45f3e4, "tcf_idr_cleanup" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf5285530, "tcf_action_set_ctrlact" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x438db727, "psample_group_get" },
	{ 0xd60bbe54, "tcf_idr_create" },
	{ 0xed6a91d5, "__tcf_idr_release" },
	{ 0x5c188742, "tcf_chain_put_by_act" },
	{ 0x978bde30, "tcf_action_check_ctrlact" },
	{ 0x2322d434, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x145055fe, "psample_group_take" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b7aa7c1, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1a9ead1e, "tcf_idr_search" },
	{ 0x5e982e4a, "tcf_generic_walker" },
	{ 0x9fc67ce2, "psample_group_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "psample");


MODULE_INFO(srcversion, "3F8DBF19458F3EC9D0F441F");
