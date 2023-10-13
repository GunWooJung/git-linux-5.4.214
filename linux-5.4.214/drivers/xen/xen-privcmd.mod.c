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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x2ebef684, "vm_map_pages_zero" },
	{ 0x4b931968, "xen_features" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x60383ea9, "xen_remap_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4fcc8ad2, "ex_handler_uaccess" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xcc71ee69, "xen_unmap_domain_gfn_range" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6610e7a9, "apply_to_page_range" },
	{ 0x20b2099, "alloc_xenballooned_pages" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x81a0cfc, "xen_remap_vma_range" },
	{ 0xc450ca24, "free_xenballooned_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2dcd8f37, "find_vma" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xb285b8f8, "xen_in_preemptible_hcall" },
	{ 0x35775925, "misc_deregister" },
	{ 0xd8cef6e1, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0x19f47877, "xen_xlate_remap_gfn_array" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5A74309BE27D237FF753AF6");
