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
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x686fe4d0, "extcon_set_property_capability" },
	{ 0x2fc735f5, "devm_extcon_dev_register" },
	{ 0x3009ba54, "devm_extcon_dev_allocate" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x480006e1, "cros_ec_get_host_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x56388fd2, "extcon_sync" },
	{ 0xf7702e60, "extcon_set_property" },
	{ 0x9c9d0c, "extcon_set_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xef064b69, "cros_ec_cmd_xfer_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D5F19C62FB7499CE9AC541B");
