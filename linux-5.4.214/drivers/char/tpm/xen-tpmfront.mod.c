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
	{ 0x7514cd74, "xenbus_unregister_driver" },
	{ 0x7bf7a9e8, "__xenbus_register_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x8def230c, "tpm_calc_ordinal_duration" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x418342ee, "xenbus_dev_error" },
	{ 0x4603116d, "tpm_chip_register" },
	{ 0x95253ad6, "tpm_get_timeouts" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x34eab46d, "bind_evtchn_to_irqhandler" },
	{ 0xe2fce310, "xenbus_alloc_evtchn" },
	{ 0x96ec6791, "xenbus_grant_ring" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x79a3da7a, "tpmm_chip_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x3ea8b5a3, "xenbus_frontend_closed" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xcdcff6fb, "tpm_chip_unregister" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2EEDA68DB016B68CBD9E6B8");
