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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc20d6c3d, "unregister_md_personality" },
	{ 0x420e5e3b, "bio_clone_fast" },
	{ 0x6720ee52, "disk_stack_limits" },
	{ 0x4f556428, "generic_make_request" },
	{ 0xa6191095, "bio_endio" },
	{ 0xa239ac16, "bio_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xad84b03e, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd648235b, "md_check_no_bitmap" },
	{ 0x82e38d1b, "register_md_personality" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0F95D2C120715FC3BE34CFD");
