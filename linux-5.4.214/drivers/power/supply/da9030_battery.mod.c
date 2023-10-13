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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x55ac6a5, "da903x_query_status" },
	{ 0xffc91461, "da903x_reads" },
	{ 0x1e4a9b79, "da903x_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x7ee415d5, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xdb797d7c, "da903x_register_notifier" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9af78bc7, "da903x_writes" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x824ffd45, "da903x_unregister_notifier" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xd338af95, "da903x_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1C529036089C335E2C336AD");
