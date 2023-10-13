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
	{ 0xcf377500, "net_ns_type_operations" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3209414c, "macvlan_link_register" },
	{ 0x61eb53e1, "tap_destroy_cdev" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5fd264df, "__class_register" },
	{ 0x7d9f0f0a, "tap_create_cdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xd267dbfb, "device_create" },
	{ 0x3044c24, "tap_free_minor" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x11379dc4, "tap_queue_resize" },
	{ 0xe32b4b0d, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20bb0b1f, "macvlan_common_setup" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x5d5d5ab5, "macvlan_common_newlink" },
	{ 0xb1089b84, "netdev_rx_handler_register" },
	{ 0x122d2f2c, "tap_handle_frame" },
	{ 0x31a2a05b, "macvlan_dellink" },
	{ 0xb6db54c, "tap_del_queues" },
	{ 0x6c398aad, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "6E52C7C353220FDBFAA8908");
