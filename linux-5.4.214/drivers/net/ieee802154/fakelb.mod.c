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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0x4356de1b, "__pskb_copy_fclone" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");


MODULE_INFO(srcversion, "024AE708DF89050B1E07A1E");
