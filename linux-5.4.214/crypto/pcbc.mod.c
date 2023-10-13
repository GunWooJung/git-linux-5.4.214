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
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84f3a0dd, "skcipher_walk_done" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xc2ec7ce2, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0xf3284af4, "skcipher_register_instance" },
	{ 0x83a98bda, "skcipher_alloc_instance_simple" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A028B8023A83A5E9496F947");
