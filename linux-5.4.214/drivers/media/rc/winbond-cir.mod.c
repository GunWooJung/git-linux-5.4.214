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
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0xc5850110, "printk" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0xae2af137, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xdc481706, "rc_register_device" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0x4bfc612f, "led_classdev_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("pnp:dWEC1022*");
MODULE_ALIAS("acpi*:WEC1022:*");

MODULE_INFO(srcversion, "CBA63E1EAC9DE0FAD83A191");
