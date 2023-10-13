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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8e17faf3, "put_device" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6932b09e, "stream_open" },
	{ 0x96c64eb9, "spi_slave_abort" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd267dbfb, "device_create" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");

MODULE_INFO(srcversion, "0524F9EBE0F698C10469D81");
