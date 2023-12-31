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
	{ 0x526a22ce, "crypto_sha1_finup" },
	{ 0xa14eac55, "crypto_sha1_update" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa5c23a5e, "crypto_unregister_shash" },
	{ 0xf67fdd9e, "crypto_register_shash" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B6A7CE4044AE953180A045A");
