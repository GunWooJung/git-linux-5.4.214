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
	{ 0x91ca0830, "crypto_unregister_scomp" },
	{ 0xf6c7e757, "crypto_unregister_alg" },
	{ 0xecc6c0c3, "crypto_register_scomp" },
	{ 0xad446de8, "crypto_register_alg" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf048a91, "sw842_compress" },
	{ 0xa4adedf1, "sw842_decompress" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "842_compress,842_decompress");


MODULE_INFO(srcversion, "8C804F0EED60A0D5A872383");
