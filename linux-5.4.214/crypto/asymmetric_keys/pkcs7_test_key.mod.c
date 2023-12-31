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
	{ 0xec01448a, "generic_key_instantiate" },
	{ 0xf7a2687e, "user_free_preparse" },
	{ 0xa203e564, "user_read" },
	{ 0xc5850110, "printk" },
	{ 0x2b7fbe2, "user_describe" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0x433ae21c, "user_preparse" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x926ade76, "user_revoke" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x535ee047, "user_destroy" },
	{ 0x58a76393, "verify_pkcs7_signature" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6A833E4ADEC602483AED5BA");
