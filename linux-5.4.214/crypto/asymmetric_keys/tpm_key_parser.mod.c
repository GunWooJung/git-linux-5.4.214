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
	{ 0x7430f97c, "tpm_key_create" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x6623cdd7, "unregister_asymmetric_key_parser" },
	{ 0x5883a6ec, "asym_tpm_subtype" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6f395e65, "__module_get" },
	{ 0x2ec3a47d, "register_asymmetric_key_parser" },
};

MODULE_INFO(depends, "asym_tpm");


MODULE_INFO(srcversion, "368CB32AE281F6E17AA429C");
