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
	{ 0x3fa52225, "n_tty_inherit_ops" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x96503445, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf9e5785, "pps_register_source" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42f381ea, "pps_unregister_source" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfba95a9f, "pps_lookup_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A402EA1A281C4D21A7030D");
