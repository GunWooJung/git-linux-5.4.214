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
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x5748356e, "device_create_file" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x1cf4def5, "devm_rc_register_device" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0xbf4f578b, "pnp_activate_dev" },
	{ 0xf4f9453e, "devm_rc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131b773, "ir_raw_encode_scancode" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe0b13336, "argv_free" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7380dffa, "argv_split" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "4D6C1E6D9678F07878C14EB");
