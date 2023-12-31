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
	{ 0xca692cdc, "ppp_unregister_compressor" },
	{ 0xf92096c2, "ppp_register_compressor" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libarc4");


MODULE_INFO(srcversion, "67E5BD2217191AEC7A591F6");
