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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x2149450, "find_vpid" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0x87140056, "bpfilter_ops" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x56a6b7d3, "fork_usermode_blob" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4075ebdd, "__put_task_struct" },
	{ 0xf92167cf, "__kernel_write" },
	{ 0xcdfaebc8, "get_pid_task" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6C5B1AEA34CD0EE830D1D3A");
