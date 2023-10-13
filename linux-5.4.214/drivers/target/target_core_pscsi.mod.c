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
	{ 0x2e7f42fb, "passthrough_attrib_attrs" },
	{ 0x1ad12840, "target_backend_unregister" },
	{ 0x474f63a6, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x494eca78, "blkdev_get_by_path" },
	{ 0xbacd3b42, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x17d0ff05, "__scsi_execute" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4fac3710, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x5d5e48e0, "blk_rq_append_bio" },
	{ 0xdf80294a, "bio_add_pc_page" },
	{ 0x7c3860dc, "blk_get_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x95399746, "passthrough_parse_cdb" },
	{ 0x57490dd6, "scsi_host_lookup" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0x278c6f8a, "scsi_device_put" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa239ac16, "bio_put" },
	{ 0xc5850110, "printk" },
	{ 0xecdc8f15, "transport_kunmap_data_sg" },
	{  0x4a781, "transport_kmap_data_sg" },
	{ 0xe1cea7aa, "target_lun_is_rdonly" },
	{ 0xab42375e, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x18ab4de8, "transport_copy_sense_to_cmd" },
	{ 0xe14b3ea8, "blk_put_request" },
	{ 0xfced7f24, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "A955EA106CA0ED0242688CE");
