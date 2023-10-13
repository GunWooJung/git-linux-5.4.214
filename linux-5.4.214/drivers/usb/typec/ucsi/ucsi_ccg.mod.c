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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4841bdee, "strnchr" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xf3e8bce4, "ucsi_register_ppm" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28ce094c, "device_property_read_u16_array" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xf2f31c4a, "ucsi_notify" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x4df17642, "ucsi_unregister_ppm" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8ab95c9e, "ucsi_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "typec_ucsi");

MODULE_ALIAS("i2c:ccgx-ucsi");

MODULE_INFO(srcversion, "28205287B6A1257DCBFB1A5");
