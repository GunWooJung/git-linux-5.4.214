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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x3c414d30, "led_trigger_event" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x92667320, "sock_queue_err_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x285c8d25, "sk_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ea7b752, "led_trigger_unregister_simple" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8885b2f5, "led_trigger_register_simple" },
	{ 0xc55f63cc, "led_trigger_blink_oneshot" },
	{ 0xfdf441b6, "skb_clone_sk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F6C458652EF40D47E06BD7");
