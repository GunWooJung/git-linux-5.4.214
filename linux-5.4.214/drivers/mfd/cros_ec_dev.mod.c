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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x5fd264df, "__class_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8e17faf3, "put_device" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x535449e7, "device_initialize" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:cros-ec-dev");

MODULE_INFO(srcversion, "03FA44B75BCC4CA776AF11F");
