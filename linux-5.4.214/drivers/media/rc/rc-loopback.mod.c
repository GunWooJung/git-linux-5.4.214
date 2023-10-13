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
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xdc481706, "rc_register_device" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0x37a0cba, "kfree" },
	{ 0x3131b773, "ir_raw_encode_scancode" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");


MODULE_INFO(srcversion, "AE0A8313A441754D0F57402");
