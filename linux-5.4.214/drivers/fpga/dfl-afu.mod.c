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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x628fe55b, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf881967a, "dfl_fpga_dev_feature_uinit" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd559511, "dfl_fpga_port_ops_add" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xece784c2, "rb_first" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc2782a5b, "account_locked_vm" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xe36dbb58, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x424be4e5, "dfl_fpga_dev_ops_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0x6b060c79, "get_user_pages_fast" },
	{ 0x240a3034, "dfl_fpga_port_ops_del" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "dfl");


MODULE_INFO(srcversion, "A642FD1B485C2D766797AD0");
