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
	{ 0x92e26bf, "acpi_remove_address_space_handler" },
	{ 0xf6c0161e, "ipmi_smi_watcher_unregister" },
	{ 0xa9ab7627, "ipmi_smi_watcher_register" },
	{ 0xc5850110, "printk" },
	{ 0xdbcf041a, "acpi_install_address_space_handler" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8e17faf3, "put_device" },
	{ 0x4cc8cd7c, "ipmi_get_smi_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "AE98BE4E130A0B0C64CB63C");
