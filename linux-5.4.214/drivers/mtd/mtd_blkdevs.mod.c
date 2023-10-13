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
	{ 0x629c2edd, "__blk_mq_end_request" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe62c1ea0, "mtd_table_mutex" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0xb640c5d1, "blk_mq_unfreeze_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x39e41588, "__put_mtd_device" },
	{ 0x86776d77, "blk_mq_freeze_queue" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x273c6924, "__get_mtd_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xe2a6db01, "blk_queue_max_discard_sectors" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x5aa281a6, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x65c3ad8f, "__mtd_next_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2fdbb091, "unregister_mtd_user" },
	{ 0xd2128f34, "blk_update_request" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xfce9e157, "blk_mq_init_sq_queue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6f395e65, "__module_get" },
	{ 0xb6adb12a, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x918904e3, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
