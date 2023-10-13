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
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x31625c8, "dmi_kobj" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x4d924f20, "memremap" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D0FD479EE83E2125544197");
