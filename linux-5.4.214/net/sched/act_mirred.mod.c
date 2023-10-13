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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcbd937db, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2a45f3e4, "tcf_idr_cleanup" },
	{ 0xed6a91d5, "__tcf_idr_release" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c188742, "tcf_chain_put_by_act" },
	{ 0xf5285530, "tcf_action_set_ctrlact" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0x978bde30, "tcf_action_check_ctrlact" },
	{ 0xd60bbe54, "tcf_idr_create" },
	{ 0x2322d434, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x73588f11, "dst_release" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b7aa7c1, "tcf_idrinfo_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1a9ead1e, "tcf_idr_search" },
	{ 0x5e982e4a, "tcf_generic_walker" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DDCA62E2912E09B60B0D5C5");
