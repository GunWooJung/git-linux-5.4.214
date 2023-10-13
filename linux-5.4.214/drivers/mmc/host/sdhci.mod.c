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
	{ 0x557048c8, "mmc_command_done" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5b6b0329, "swiotlb_max_segment" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xecbb1908, "regulator_is_supported_voltage" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xd1eb244e, "mmc_can_gpio_cd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x205a6b8, "mmc_can_gpio_ro" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfc959f99, "mmc_gpio_get_ro" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd51f68d3, "regulator_get_current_limit" },
	{ 0x9a644698, "mmc_gpio_get_cd" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb826449, "sdio_signal_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe7f5d7e4, "mmc_regulator_set_ocr" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3bd24315, "mmc_abort_tuning" },
	{ 0x492e4b4f, "mmc_regulator_set_vqmmc" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe9b87cd3, "mmc_regulator_get_supply" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2fd5a4bd, "mmc_retune_timer_stop" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4C48C4B616FA409FAFF563D");
