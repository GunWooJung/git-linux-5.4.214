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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x774844c8, "call_netdevice_notifiers" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0x721c9d1f, "init_net" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6B19CE6443ECA50062E0566");
