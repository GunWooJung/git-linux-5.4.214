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
	{ 0x3fa6d454, "tpm_pm_resume" },
	{ 0xdb91a2d7, "tpm_pm_suspend" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x4603116d, "tpm_chip_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x79a3da7a, "tpmm_chip_alloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcdcff6fb, "tpm_chip_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa516655f, "__i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tpm_i2c_infineon");
MODULE_ALIAS("i2c:slb9635tt");
MODULE_ALIAS("i2c:slb9645tt");

MODULE_INFO(srcversion, "C92321E7A57F8D1F06E7AEF");
