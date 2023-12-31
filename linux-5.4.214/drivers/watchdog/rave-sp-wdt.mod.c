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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x70648c92, "devm_watchdog_register_device" },
	{ 0xc51a58f4, "devm_register_reboot_notifier" },
	{ 0xb5bb1c12, "watchdog_set_restart_priority" },
	{ 0x4ab741fd, "watchdog_init_timeout" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x8f5c470d, "nvmem_cell_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43e53ef9, "rave_sp_exec" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rave-sp");

MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog-legacy");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog-legacyC*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdogC*");

MODULE_INFO(srcversion, "20C3703D24A60653051F7DE");
