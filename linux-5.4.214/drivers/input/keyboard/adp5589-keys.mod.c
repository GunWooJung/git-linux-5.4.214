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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x66c54ff1, "input_event" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:adp5589-keys");
MODULE_ALIAS("i2c:adp5585-keys");
MODULE_ALIAS("i2c:adp5585-02-keys");

MODULE_INFO(srcversion, "84032AC0A9EE53B8324325B");
