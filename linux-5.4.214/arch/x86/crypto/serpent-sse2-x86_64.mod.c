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
	{ 0x200fcd20, "glue_ctr_req_128bit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0x744ce5cf, "simd_unregister_skciphers" },
	{ 0xfe931060, "glue_ecb_req_128bit" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0x81294eb1, "simd_register_skciphers_compat" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0xf4fe9ce5, "glue_cbc_encrypt_req_128bit" },
	{ 0x56308c35, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "C066807FC18FE99E25F5EF8");
