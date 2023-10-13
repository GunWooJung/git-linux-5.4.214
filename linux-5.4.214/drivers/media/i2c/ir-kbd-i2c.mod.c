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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "4E45F5A6680E59791EEBDC7");
