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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x66a35e8f, "usb_hub_find_child" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x66c54ff1, "input_event" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "8F413D8F5C12000146EB333");
