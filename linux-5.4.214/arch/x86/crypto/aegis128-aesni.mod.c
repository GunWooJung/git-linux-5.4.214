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
	{ 0xc7d61ce0, "skcipher_walk_aead_decrypt" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6786c1ae, "simd_unregister_aeads" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x84f3a0dd, "skcipher_walk_done" },
	{ 0x33bc1a58, "skcipher_walk_aead_encrypt" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x140b29e5, "simd_register_aeads_compat" },
};

MODULE_INFO(depends, "crypto_simd");


MODULE_INFO(srcversion, "56B0EBC212547DC1775B92F");
