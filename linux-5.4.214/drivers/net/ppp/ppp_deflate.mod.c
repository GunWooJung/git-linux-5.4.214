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
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0xc5850110, "printk" },
	{ 0x424d3620, "zlib_inflateIncomp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77A9A897F1C8BA96451F549");
