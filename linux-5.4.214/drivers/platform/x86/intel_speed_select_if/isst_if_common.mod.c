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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0x6851664e, "wrmsrl_safe_on_cpu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7E4C4C581FBE8DCE3EF3845");
