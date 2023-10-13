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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x66432aba, "serial8250_register_8250_port" },
	{ 0xb65ab2cc, "get_tree_single" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1027f50f, "generic_delete_inode" },
	{ 0x561501a1, "dput" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc8a399bd, "d_add" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x15b4a2e2, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32ee9868, "simple_open" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x658e845, "simple_dir_operations" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x7db9305a, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x913fddba, "d_make_root" },
	{ 0x75d519a2, "simple_statfs" },
	{ 0x85c03267, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b0173be, "new_inode" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa240dcea, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000010Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "13A5BEB6B9F9877C771F21E");
