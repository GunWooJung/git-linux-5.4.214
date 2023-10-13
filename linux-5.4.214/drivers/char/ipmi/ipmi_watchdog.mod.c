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
	{ 0x879724cb, "param_get_int" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xf6c0161e, "ipmi_smi_watcher_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xa9ab7627, "ipmi_smi_watcher_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb3a2dfdf, "nmi_panic" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x77bc13a0, "strim" },
	{ 0x9166fada, "strncpy" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xde4eeab5, "__register_nmi_handler" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf5531bea, "ipmi_poll_interface" },
	{ 0x50d4a390, "param_set_int" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x35775925, "misc_deregister" },
	{ 0x29361773, "complete" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xa916b694, "strnlen" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf1e046cc, "panic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x89a5279a, "ipmi_get_version" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaca90ebd, "ipmi_request_supply_msgs" },
	{ 0x6932b09e, "stream_open" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "C2B15A21A6C822E03FE3F6C");
