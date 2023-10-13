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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x64049638, "typec_altmode_notify" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2fc52121, "typec_altmode_unregister_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc6be2dd8, "typec_altmode_exit" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xca5f146a, "typec_altmode_vdm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd731588a, "typec_altmode_enter" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c5da513, "typec_altmode_get_partner" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6c8d61b4, "__typec_altmode_register_driver" },
};

MODULE_INFO(depends, "typec");

MODULE_ALIAS("typec:idFF01m01");

MODULE_INFO(srcversion, "ED627421FB6D191AE861714");
