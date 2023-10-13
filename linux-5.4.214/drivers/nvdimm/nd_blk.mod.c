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
	{ 0x5cb99970, "nd_btt_probe" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x365aeed1, "nvdimm_namespace_common_probe" },
	{ 0x4b434101, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4ee3bd09, "nd_integrity_init" },
	{ 0x1d41b2ec, "nvdimm_namespace_capacity" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b1e697e, "is_nd_btt" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x581487f9, "nvdimm_namespace_disk_name" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x60c75e05, "blk_alloc_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x68f5b592, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xd4dc58bd, "__nd_driver_register" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x1bcc82bb, "generic_start_io_acct" },
	{ 0xa6191095, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x1e49de5d, "nvdimm_namespace_detach_btt" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0xe3361259, "nvdimm_namespace_attach_btt" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbcd4149c, "nvdimm_revalidate_disk" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x16b63d0c, "bio_integrity_prep" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "1AD06B999B337EB81017D27");
