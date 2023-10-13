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
	{ 0x3e5d7dab, "unregister_mtd_chip_driver" },
	{ 0xc0aaadd3, "register_mtd_chip_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83274a28, "cfi_build_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f1e36ad, "cfi_build_cmd_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa35d8dc0, "cfi_send_gen_cmd" },
	{ 0x9279354f, "mtd_do_chip_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,cfi_util,gen_probe");


MODULE_INFO(srcversion, "63F57C1BC7422D6C9A32EA9");
