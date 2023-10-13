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
	{ 0x922dc5b2, "crypto_unregister_template" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0xff01d3f1, "aead_exit_geniv" },
	{ 0x8edaba69, "aead_init_geniv" },
	{ 0x75198793, "aead_geniv_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xe4c9ab75, "aead_geniv_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5A40501CCA4D88949BD499");
