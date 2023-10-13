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
	{ 0x765395c3, "param_ops_int" },
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xad263612, "consume_skb" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7f18313d, "__neigh_event_send" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0xf5f1f564, "__neigh_create" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x272147fe, "softnet_data" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe1b80f1a, "neigh_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1428F5793E742EBA1F76FB");
