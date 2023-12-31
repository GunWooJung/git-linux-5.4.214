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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa6191095, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6AA062FC30994CB82E1F991");
