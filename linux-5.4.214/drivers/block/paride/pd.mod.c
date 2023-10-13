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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0xabb5d934, "pi_release" },
	{ 0x81ecacfe, "pi_init" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0xf7078cc4, "pi_schedule_claimed" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5da57723, "pi_disconnect" },
	{ 0xe7261545, "pi_write_block" },
	{ 0x629c2edd, "__blk_mq_end_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd2128f34, "blk_update_request" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x2c8218b3, "blk_queue_bounce_limit" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xe14b3ea8, "blk_put_request" },
	{ 0x76e61117, "blk_execute_rq" },
	{ 0x7c3860dc, "blk_get_request" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x637744bb, "pi_read_block" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xedde963f, "pi_read_regr" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x540b9806, "pi_write_regr" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "9A20AB0111FACC83756E6F2");
