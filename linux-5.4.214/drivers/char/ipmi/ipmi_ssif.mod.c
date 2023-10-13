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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xca2ca1f5, "device_property_read_u8_array" },
	{ 0x28ce094c, "device_property_read_u16_array" },
	{ 0xeb7ed4b5, "i2c_for_each_dev" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0x670c8ac6, "ipmi_add_smi" },
	{ 0x530e0df7, "device_add_groups" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xbdee9d50, "i2c_adapter_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7719c6f1, "i2c_smbus_write_block_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x29361773, "complete" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd80477bf, "device_remove_groups" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "C8FC0C49168529B04DFD889");
