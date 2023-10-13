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
	{ 0xe3a237ca, "cdev_set_parent" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x343e2953, "inode_dax" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xf09c0d73, "kill_dev_dax" },
	{ 0xbebaffdb, "vmf_insert_pfn_pud" },
	{ 0x664a6e08, "vmf_insert_pfn_pmd" },
	{ 0x77358855, "iomem_resource" },
	{ 0x242f3bba, "vmf_insert_mixed" },
	{ 0x3f84bcd7, "dax_alive" },
	{ 0xd0db0f12, "run_dax" },
	{ 0xb4de272a, "devm_memremap_pages" },
	{ 0xd84d35bd, "dax_read_lock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5e75158e, "__dax_driver_register" },
	{ 0xfcd0346a, "noop_set_page_dirty" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x69564973, "noop_invalidatepage" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x824e5579, "dax_inode" },
	{ 0x47e9b015, "linear_hugepage_index" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x8eee3399, "dax_read_unlock" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8b910be2, "errseq_sample" },
	{ 0x5359cfb7, "dax_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5FDEE534285311573FA8AF");
