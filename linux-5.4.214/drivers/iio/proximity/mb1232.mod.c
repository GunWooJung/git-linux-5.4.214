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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:maxbotix-mb1202");
MODULE_ALIAS("i2c:maxbotix-mb1212");
MODULE_ALIAS("i2c:maxbotix-mb1222");
MODULE_ALIAS("i2c:maxbotix-mb1232");
MODULE_ALIAS("i2c:maxbotix-mb1242");
MODULE_ALIAS("i2c:maxbotix-mb7040");
MODULE_ALIAS("i2c:maxbotix-mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1202C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1212C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1222C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1232C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1242C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7040C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb7137C*");

MODULE_INFO(srcversion, "E47E0AE19C777C99C85DA7B");
