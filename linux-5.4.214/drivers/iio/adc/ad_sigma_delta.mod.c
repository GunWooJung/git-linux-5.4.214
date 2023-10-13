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
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0x39a9b959, "spi_sync_locked" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x586583b8, "spi_sync" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xa3bfe695, "spi_bus_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xc96ebfb3, "iio_validate_scan_mask_onehot" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0x60833470, "spi_bus_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "EE2D9713A1097E083035497");
