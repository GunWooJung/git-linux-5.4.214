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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa35d8dc0, "cfi_send_gen_cmd" },
	{ 0x83274a28, "cfi_build_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x80023f65, "cfi_qry_mode_off" },
	{ 0x325cead8, "cfi_qry_present" },
	{ 0x4e9c546a, "cfi_qry_mode_on" },
	{ 0xc5850110, "printk" },
	{ 0x9279354f, "mtd_do_chip_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,cfi_util,gen_probe");


MODULE_INFO(srcversion, "B6ED73AE68A89944133A408");
