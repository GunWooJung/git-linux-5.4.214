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
	{ 0xdc274b8f, "bus_register" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xbf1a9899, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xd0e78813, "dev_pm_domain_detach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb453ae86, "dev_pm_domain_attach" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "152921595C1C6E7B9DFAFC7");
