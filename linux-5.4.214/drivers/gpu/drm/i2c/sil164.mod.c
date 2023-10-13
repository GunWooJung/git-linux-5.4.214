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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x20645642, "drm_debug" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x523e0cf2, "drm_i2c_encoder_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1d6c8f1, "i2c_new_device" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("i2c:sil164");

MODULE_INFO(srcversion, "AA5B4AA00C71050588EFF01");
