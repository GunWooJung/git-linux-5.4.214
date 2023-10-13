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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4b931968, "xen_features" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9312d80e, "evtchn_put" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x67477f2c, "vm_insert_page" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xf5785b42, "evtchn_get" },
	{ 0x204f2c5c, "gnttab_free_grant_reference" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E0E2EEABC39213F49604159");
