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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x3c5d4a97, "visorbus_unregister_visor_driver" },
	{ 0x90c87fa8, "visorbus_register_visor_driver" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xba190241, "visorbus_read_channel" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc455c651, "visorchannel_get_guid" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb1bfe568, "visorbus_enable_channel_interrupts" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa20e6950, "visorbus_disable_channel_interrupts" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x66c54ff1, "input_event" },
	{ 0x56401853, "visorchannel_signalremove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "visorbus");


MODULE_INFO(srcversion, "1E3DD41CB2088A6172C3147");
