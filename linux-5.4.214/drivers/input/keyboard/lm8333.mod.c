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
	{ 0x94a09154, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x57ab91cb, "matrix_keypad_build_keymap" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x66c54ff1, "input_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("i2c:lm8333");

MODULE_INFO(srcversion, "21815E3BCA3C3174FFD255F");
