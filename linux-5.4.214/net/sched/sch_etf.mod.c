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
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0x19faf0c0, "kfree_skb_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2c20c9dd, "rtnl_kfree_skbs" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc5850110, "printk" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdb12bd3, "qdisc_watchdog_init_clockid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x83b3c2bd, "qdisc_watchdog_cancel" },
	{ 0xff6548d5, "qdisc_watchdog_schedule_ns" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x92667320, "sock_queue_err_skb" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "741D6D29A86E928B15D94D0");
