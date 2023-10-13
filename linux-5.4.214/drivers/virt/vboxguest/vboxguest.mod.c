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
	{ 0x2d3385d3, "system_wq" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x39461d6a, "in_egroup_p" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa5518745, "from_kuid" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xeade671, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5748356e, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x94a09154, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x35775925, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000080EEd0000CAFEsv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "D55B97AFF7407B439DD3815");
