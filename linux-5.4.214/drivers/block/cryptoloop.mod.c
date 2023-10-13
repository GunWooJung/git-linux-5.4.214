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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0x88253331, "loop_register_transfer" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfb578fc5, "memset" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5850110, "printk" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4B9F9379CD37F8B42AC06ED");
