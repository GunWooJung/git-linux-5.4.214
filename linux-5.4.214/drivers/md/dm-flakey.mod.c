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
	{ 0x378180d9, "dm_unregister_target" },
	{ 0xc5850110, "printk" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa6191095, "bio_endio" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6238d28b, "dm_per_bio_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x96848186, "scnprintf" },
	{ 0x270f1447, "dm_remap_zone_report" },
	{ 0x61401f7c, "blkdev_report_zones" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1554017CC611C168E574228");
