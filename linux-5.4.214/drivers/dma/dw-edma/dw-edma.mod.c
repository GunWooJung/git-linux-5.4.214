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
	{ 0x4f1c0f20, "vchan_tx_submit" },
	{ 0xff08ebd0, "vchan_find_desc" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x87b8798d, "sg_next" },
	{ 0xbdf15930, "dma_async_tx_descriptor_init" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x72914782, "dma_async_device_register" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7bf29cd, "get_cached_msi_msg" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x685f7ee9, "vchan_tx_desc_free" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe8febb33, "debugfs_create_u16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe09a762, "dma_async_device_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xb66332fd, "vchan_init" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5640DB24C25FB5A3443730A");
