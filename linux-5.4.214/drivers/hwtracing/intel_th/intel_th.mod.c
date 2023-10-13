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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4f11e4e9, "pm_runtime_no_callbacks" },
	{ 0x8ce84b75, "device_match_devt" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xce2f01d5, "device_del" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x7add3d63, "bus_find_device" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x535449e7, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8CB84A39D086399110625F6");
