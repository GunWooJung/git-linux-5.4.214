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
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf369487d, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F5ECE6FF560470A2A03FA9");
