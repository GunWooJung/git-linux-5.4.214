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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeec88271, "regulator_bulk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a0cba, "kfree" },
	{ 0xedf79230, "regulator_bulk_free" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:apds990x");

MODULE_INFO(srcversion, "E3148E45347D1E0A40ED88A");