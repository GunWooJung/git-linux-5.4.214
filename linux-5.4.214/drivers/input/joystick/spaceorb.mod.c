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
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xdab91ed4, "serio_open" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x66c54ff1, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr19id*ex*");

MODULE_INFO(srcversion, "704BAF98710E003219B78C6");
