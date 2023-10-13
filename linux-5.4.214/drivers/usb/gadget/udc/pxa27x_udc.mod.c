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
	{ 0xd111bb59, "_dev_info" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xd5c9b13d, "usb_get_phy" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x88a10eda, "usb_phy_set_charger_current" },
	{ 0x37a0cba, "kfree" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb3f93fc7, "usb_put_phy" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x7802343, "usb_gadget_vbus_disconnect" },
	{ 0x316c15d8, "usb_gadget_vbus_connect" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "11ADF71A837561B01B25DB1");
