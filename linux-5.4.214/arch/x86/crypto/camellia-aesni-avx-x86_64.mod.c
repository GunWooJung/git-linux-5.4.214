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
	{ 0xfe729ed6, "__camellia_enc_blk" },
	{ 0x200fcd20, "glue_ctr_req_128bit" },
	{ 0x47c4e08f, "glue_xts_crypt_128bit_one" },
	{ 0xc5e3cec8, "__camellia_setkey" },
	{ 0xb901549, "camellia_dec_blk_2way" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x315d28f7, "camellia_crypt_ctr_2way" },
	{ 0x744ce5cf, "simd_unregister_skciphers" },
	{ 0xee61eb71, "camellia_crypt_ctr" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xfe931060, "glue_ecb_req_128bit" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x81294eb1, "simd_register_skciphers_compat" },
	{ 0xe62a6258, "glue_xts_req_128bit" },
	{ 0x69f4ff25, "__camellia_enc_blk_2way" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8d9b761c, "camellia_decrypt_cbc_2way" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf4fe9ce5, "glue_cbc_encrypt_req_128bit" },
	{ 0xff09bd65, "camellia_dec_blk" },
	{ 0x56308c35, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "camellia-x86_64,glue_helper,crypto_simd");


MODULE_INFO(srcversion, "A8FFF28A2F8D04AAF7BA048");
