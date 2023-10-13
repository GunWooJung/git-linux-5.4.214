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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0x23e04ab2, "mc13xxx_adc_do_conversion" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8cd34fef, "mc13xxx_irq_request" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6ee328a6, "mc13xxx_unlock" },
	{ 0x3589d732, "mc13xxx_irq_free" },
	{ 0x92fd7837, "mc13xxx_reg_rmw" },
	{ 0x36ac3763, "mc13xxx_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");


MODULE_INFO(srcversion, "F6A02FB902F3E4A6099E53D");
