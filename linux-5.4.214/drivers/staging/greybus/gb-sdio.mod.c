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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0xfd05907, "gb_gbphy_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0xc724a027, "gb_connection_disable_rx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2ddbf8ad, "gb_gbphy_deregister_driver" },
	{ 0x4889d2e8, "gb_connection_enable_tx" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x8ef3357e, "gb_connection_destroy" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x473c262d, "gb_connection_enable" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x18fb44dd, "gb_connection_create" },
	{ 0x71fef88e, "gb_connection_disable" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x22683675, "gb_operation_get_payload_size_max" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "1177D317CEF9678C93E91EA");
