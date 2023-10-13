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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xe66ff775, "rmi_driver_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0x1d98376c, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xa3f0691, "rmi_set_attn_data" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0x5df5765d, "dummy_irq_chip" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbed774f6, "rmi_unregister_transport_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66c54ff1, "input_event" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa1fcd11a, "rmi_driver_suspend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "A341DEBA6232F20FFC52A6F");
