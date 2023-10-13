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
	{ 0x85a8ee76, "ubi_unregister_volume_notifier" },
	{ 0xf5ee9ba8, "ubi_register_volume_notifier" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16c2fb7d, "ubi_leb_erase" },
	{ 0x5beb9fbc, "ubi_leb_unmap" },
	{ 0x40e91f33, "ubi_leb_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd337a91e, "ubi_leb_write" },
	{ 0x591a3bf5, "ubi_open_volume" },
	{ 0xa1fdab57, "ubi_close_volume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ubi,mtd");


MODULE_INFO(srcversion, "D6AB257E0C4CE5FF969B575");
