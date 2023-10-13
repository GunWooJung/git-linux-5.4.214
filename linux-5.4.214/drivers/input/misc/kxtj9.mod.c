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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x66c54ff1, "input_event" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:kxtj9");

MODULE_INFO(srcversion, "257DE9025F716565818CB7D");
