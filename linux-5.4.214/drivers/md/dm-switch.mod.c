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
	{ 0x378180d9, "dm_unregister_target" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x4740c60c, "dm_set_target_max_io_len" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x96848186, "scnprintf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "40FA6BABAF85A73818BF824");
