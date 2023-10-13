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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x94a09154, "input_register_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x66c54ff1, "input_event" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x85b5e625, "rfkill_set_states" },
	{ 0xff282521, "rfkill_register" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");


MODULE_INFO(srcversion, "BECD98849987952C8CD978C");
