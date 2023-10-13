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
	{ 0x38800636, "serpent_cbc_dec_8way_avx" },
	{ 0x200fcd20, "glue_ctr_req_128bit" },
	{ 0x194b2841, "serpent_ecb_enc_8way_avx" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4eb4c55e, "__serpent_encrypt" },
	{ 0x744ce5cf, "simd_unregister_skciphers" },
	{ 0x99341b41, "serpent_xts_dec_8way_avx" },
	{ 0xa0100109, "serpent_xts_dec" },
	{ 0xfe931060, "glue_ecb_req_128bit" },
	{ 0x3fa38202, "xts_serpent_setkey" },
	{ 0xbcc074f3, "__serpent_decrypt" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xcee44453, "serpent_xts_enc" },
	{ 0x81294eb1, "simd_register_skciphers_compat" },
	{ 0xe62a6258, "glue_xts_req_128bit" },
	{ 0x5cea0c9c, "serpent_ctr_8way_avx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4140192a, "serpent_ecb_dec_8way_avx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0xbdfa6cc0, "serpent_xts_enc_8way_avx" },
	{ 0xf4fe9ce5, "glue_cbc_encrypt_req_128bit" },
	{ 0xb75988d7, "__serpent_crypt_ctr" },
	{ 0x56308c35, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "serpent-avx-x86_64,glue_helper,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "351013A03614244ACD526F1");
