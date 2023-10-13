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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xd633e59d, "nand_prog_page_end_op" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3a404bc0, "nand_prog_page_begin_op" },
	{ 0x3ae5364c, "nand_release" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdb55a73d, "nand_ecc_choose_conf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xc2fc233b, "nand_cleanup" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8ecbb3b8, "nand_check_erased_ecc_chunk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5566c033, "nand_scan_with_ids" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0xa4d6b0a6, "nand_read_page_op" },
	{ 0x3dd9c441, "nand_change_write_column_op" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x881306c8, "nand_change_read_column_op" },
	{ 0x29361773, "complete" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "nand,mtd");


MODULE_INFO(srcversion, "9D52DF5AA94EDCB8A9BD626");
