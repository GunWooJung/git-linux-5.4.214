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
	{ 0xca0316a4, "mei_irq_write_handler" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x3c57dc67, "mei_write_is_idle" },
	{ 0xb3fcca74, "mei_device_init" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xa5bff49d, "__tracepoint_mei_pci_cfg_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5354c98d, "mei_restart" },
	{ 0x2c614296, "mei_irq_compl_handler" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x834b48f5, "mei_register" },
	{ 0xabdb459e, "mei_stop" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x5e83eb87, "mei_irq_read_handler" },
	{ 0x82dbaecb, "mei_cancel_work" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfde6bc9d, "mei_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2a7002bf, "mei_start" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x90a24af4, "mei_fw_status2str" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x84ad0dd3, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00000F18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002298sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "75E889D3E72A03602805B65");
