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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6ffe62f4, "crypto_unregister_skciphers" },
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfe931060, "glue_ecb_req_128bit" },
	{ 0x28d6d258, "crypto_register_skciphers" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x474ab1cd, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4fe9ce5, "glue_cbc_encrypt_req_128bit" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0x56308c35, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,twofish-x86_64,twofish_common");


MODULE_INFO(srcversion, "1C6E90066615FBC910A28EF");
