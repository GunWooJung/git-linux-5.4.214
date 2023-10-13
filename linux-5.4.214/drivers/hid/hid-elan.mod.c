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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0xdcd5b31c, "input_mt_destroy_slots" },
	{ 0x94a09154, "input_register_device" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000004F3p0000074D");
MODULE_ALIAS("hid:b0003g*v000004F3p00000755");
MODULE_ALIAS("hid:b0018g*v000004F3p00000401");

MODULE_INFO(srcversion, "A1D8F85332792FEF348713F");
