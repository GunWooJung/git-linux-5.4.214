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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0x6932b09e, "stream_open" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x5748356e, "device_create_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x35775925, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:fscpos");
MODULE_ALIAS("i2c:fscher");
MODULE_ALIAS("i2c:fscscy");
MODULE_ALIAS("i2c:fschrc");
MODULE_ALIAS("i2c:fschmd");
MODULE_ALIAS("i2c:fschds");
MODULE_ALIAS("i2c:fscsyl");

MODULE_INFO(srcversion, "BE47DA208D7A992AB33CB09");
