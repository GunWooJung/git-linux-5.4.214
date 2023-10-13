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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37a0cba, "kfree" },
	{ 0x87036eb1, "iio_kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xe5f845dc, "dma_request_chan" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa1b7f476, "iio_device_attach_buffer" },
	{ 0x54f4505f, "iio_kfifo_allocate" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xef111412, "am335x_tsc_se_adc_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa61d8165, "am335x_tsc_se_set_once" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd4656e5f, "am335x_tsc_se_clr" },
	{ 0xbb79adb2, "am335x_tsc_se_set_cache" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio,ti_am335x_tscadc");

MODULE_ALIAS("of:N*T*Cti,am3359-adc");
MODULE_ALIAS("of:N*T*Cti,am3359-adcC*");

MODULE_INFO(srcversion, "5664726A91C01E351A62DE8");
