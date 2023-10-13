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
	{ 0x7cfd3e78, "ishtp_cl_io_rb_recycle" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfb78df25, "ishtp_cl_unlink" },
	{ 0x7a19e79a, "ishtp_set_connection_state" },
	{ 0x7e8e1c9e, "ishtp_cl_driver_register" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfd59c58f, "ishtp_cl_flush_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xafaa6849, "ishtp_put_device" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3cd383f6, "ishtp_cl_connect" },
	{ 0xfdb3d534, "ishtp_set_rx_ring_size" },
	{ 0xc805f93, "clflush_cache_range" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c011330, "ishtp_cl_driver_unregister" },
	{ 0x89250c70, "ishtp_device" },
	{ 0x3cd96f, "ishtp_cl_link" },
	{ 0x7c12fcd9, "ish_hw_reset" },
	{ 0x43cceaea, "ishtp_cl_disconnect" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0x3230b631, "ishtp_fw_cl_get_client" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0xbd71afe1, "ishtp_get_pci_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x27e2c41, "ishtp_register_event_cb" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x901561bd, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3cd45662, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xadf634f6, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x9242785d, "ishtp_set_tx_ring_size" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9c6dd682, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3295bc51, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x346d46d6, "ishtp_cl_set_fw_client_id" },
	{ 0x953faffe, "ishtp_cl_free" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7169c5f2, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xab983443, "ishtp_cl_allocate" },
	{ 0xfe54a2b1, "ishtp_get_ishtp_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x8dffec33, "ishtp_cl_rx_get_rb" },
};

MODULE_INFO(depends, "intel-ishtp");


MODULE_INFO(srcversion, "B6E352656FBEFDB7170033C");
