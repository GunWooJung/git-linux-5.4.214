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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c54ff1, "input_event" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cy8ctmg110");

MODULE_INFO(srcversion, "137B1E5E2F0B391EDC53E1B");
