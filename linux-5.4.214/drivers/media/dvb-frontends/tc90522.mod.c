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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8733236, "intlog10" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:tc90522sat");
MODULE_ALIAS("i2c:tc90522ter");

MODULE_INFO(srcversion, "309948348055DEBCE6139B6");
