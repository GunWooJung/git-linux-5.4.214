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
	{ 0x765395c3, "param_ops_int" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeb757555, "scsi_unregister_device_handler" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0xd328b61f, "scsi_register_device_handler" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7dec0c23, "scsi_get_vpd_page" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3080B06DB7FCB4166356B14");
