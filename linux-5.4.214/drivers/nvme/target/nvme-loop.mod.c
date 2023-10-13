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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xbef3c09c, "nvme_stop_ctrl" },
	{ 0xb7b55579, "blk_mq_tagset_busy_iter" },
	{ 0xdf2b424c, "blk_mq_start_request" },
	{ 0x4f85d0e4, "nvmf_register_transport" },
	{ 0x35ed15f3, "nvme_shutdown_ctrl" },
	{ 0xa0fb54ad, "nvme_set_queue_count" },
	{ 0xf72b8ff8, "nvme_stop_queues" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0x583fb2bb, "nvme_complete_async_event" },
	{ 0x463ac158, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6103ec6d, "blk_mq_complete_request" },
	{ 0xc2980348, "nvmf_reg_write32" },
	{ 0xfc6fc859, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x61f8b9fc, "nvmet_req_execute" },
	{ 0x7bbeba88, "blk_mq_init_queue" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7681a302, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x45837452, "nvmf_connect_admin_queue" },
	{ 0x29d65464, "blk_mq_free_tag_set" },
	{ 0xd8a5608d, "nvme_init_identify" },
	{ 0xbf3c93b4, "nvmf_reg_read64" },
	{ 0xb52aecf0, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2a25e351, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0xa741afd2, "nvme_init_ctrl" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x502c40c6, "nvme_change_ctrl_state" },
	{ 0x6ebaf85e, "nvmet_unregister_transport" },
	{ 0x8e17faf3, "put_device" },
	{ 0x5b11bdd, "nvmf_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x797bf872, "nvme_cleanup_cmd" },
	{ 0xae5d9e1a, "nvme_cancel_request" },
	{ 0x679eeb0, "nvmet_sq_destroy" },
	{ 0x2c57f6ba, "nvmf_get_address" },
	{ 0xab19c39d, "blk_rq_map_sg" },
	{ 0x926c1cea, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x7429aaaa, "nvme_delete_ctrl" },
	{ 0xb55d0e53, "nvmf_reg_read32" },
	{ 0x8bf18a1c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x610ce49f, "blk_mq_quiesce_queue" },
	{ 0xd96121b, "nvmf_connect_io_queue" },
	{ 0x5e89d5ea, "blk_mq_unquiesce_queue" },
	{ 0xce7c87d3, "nvme_start_ctrl" },
	{ 0x4f76311c, "nvme_setup_cmd" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0xd76c6a37, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb335741, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x51f424c7, "nvme_complete_rq" },
	{ 0x8f5d46a5, "nvme_uninit_ctrl" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics,nvmet");


MODULE_INFO(srcversion, "1D4C15C4CFC81F7003CB450");
