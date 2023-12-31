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
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x6626afca, "down" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xcf2a6966, "up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x46643670, "sysfs_chmod_file" },
	{ 0x96848186, "scnprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x22010fec, "gpiochip_free_own_desc" },
	{ 0xe2bebbc2, "gpiochip_unlock_as_irq" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");

MODULE_INFO(srcversion, "BBDFD93B9511176699BFF2C");
