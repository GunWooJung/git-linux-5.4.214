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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xcb9b087e, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x24f106a9, "tty_mode_ioctl" },
	{ 0xd2b73a53, "n_tty_ioctl_helper" },
	{ 0x709ba1c2, "ppp_channel_index" },
	{ 0x2f2c7efb, "ppp_unit_number" },
	{ 0x20bbb285, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x29361773, "complete" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf87d51c, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd523d85d, "skb_push" },
	{ 0xc5850110, "printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfa9ea168, "ppp_output_wakeup" },
	{ 0xbb9ab629, "ppp_input" },
	{ 0x36a6c96a, "ppp_input_error" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x963dcba1, "_raw_spin_trylock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A72E539EA0EBC4BD96B74D8");
