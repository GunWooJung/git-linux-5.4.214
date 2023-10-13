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
	{ 0x94a09154, "input_register_device" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x66c54ff1, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt2160");

MODULE_INFO(srcversion, "CC04654217A1F868FB6E8F1");
