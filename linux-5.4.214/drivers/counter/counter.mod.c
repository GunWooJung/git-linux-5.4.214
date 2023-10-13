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
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xce2f01d5, "device_del" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x398c9016, "devres_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F45C09F47EBBC3A1419C5C5");
