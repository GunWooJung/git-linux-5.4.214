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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x84f5e5a5, "input_ff_create_memless" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xc6854343, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v00001241p00005015");

MODULE_INFO(srcversion, "7E44088649BF5FF436D2118");
