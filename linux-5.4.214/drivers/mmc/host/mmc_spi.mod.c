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
	{ 0x9a644698, "mmc_gpio_get_cd" },
	{ 0xfc959f99, "mmc_gpio_get_ro" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xe4c289e7, "mmc_gpiod_request_cd_irq" },
	{ 0x81590e65, "mmc_gpiod_request_ro" },
	{ 0xae539c6e, "mmc_gpiod_request_cd" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0x60833470, "spi_bus_unlock" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xa3bfe695, "spi_bus_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe21d630c, "spi_setup" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x39a9b959, "spi_sync_locked" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc-itu-t,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "2F740B5703CFE0E31CEE01B");
