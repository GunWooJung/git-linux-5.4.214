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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x586583b8, "spi_sync" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81D384CB2FB10C13D3FADEF");
