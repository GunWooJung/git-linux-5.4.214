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
	{ 0xcc32bc9e, "cryptd_ahash_queued" },
	{ 0x1eca6418, "shash_ahash_digest" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xd520a6cd, "cryptd_shash_desc" },
	{ 0xab011663, "crypto_register_ahash" },
	{ 0xa5c23a5e, "crypto_unregister_shash" },
	{ 0xf67fdd9e, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x4129f5ee, "kernel_fpu_begin_mask" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9e166e54, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe3872263, "cryptd_ahash_child" },
	{ 0x88936b7, "crypto_ahash_setkey" },
	{ 0xaa0ef9fb, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x199d46e9, "cryptd_alloc_ahash" },
	{ 0x76945a63, "cryptd_free_ahash" },
	{ 0x8303ac5, "x86_match_cpu" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "E0A5C143DA1C0BE9375FD6D");
