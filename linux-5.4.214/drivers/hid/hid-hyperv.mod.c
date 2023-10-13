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
	{ 0x72fc91c0, "vmbus_driver_unregister" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x1c89a710, "hid_add_device" },
	{ 0x20415a21, "hid_allocate_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0xa6ec525f, "hid_input_report" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc5850110, "printk" },
	{ 0x91f5647e, "hv_pkt_iter_close" },
	{ 0xdf6e8946, "__hv_pkt_iter_next" },
	{ 0x643ab05a, "hv_pkt_iter_first" },
	{ 0x2757c65b, "hid_parse_report" },
	{ 0xc0db57d8, "hid_destroy_device" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,hid");

MODULE_ALIAS("vmbus:9eb6a8cf4a5bc04cb98b8ba1a1f3f95a");

MODULE_INFO(srcversion, "9C23D371031437D529ED693");
