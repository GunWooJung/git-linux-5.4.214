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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdb61fc, "gether_get_qmult" },
	{ 0xdcddd042, "gether_setup_name_default" },
	{ 0x3d42905a, "gether_get_host_addr_cdc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe331a714, "gether_get_ifname" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0x2a0eb1ad, "gether_set_host_addr" },
	{ 0xb37909e8, "gether_get_dev_addr" },
	{ 0x1f8a63f2, "gether_connect" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1d2e4d7c, "gether_set_gadget" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa8d80e11, "gether_get_host_addr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x641676d2, "gether_set_qmult" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x96bcd5be, "gether_register_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x54e8b57d, "gether_set_dev_addr" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa24a2871, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "8FF1EF4052D271106BAECE5");
