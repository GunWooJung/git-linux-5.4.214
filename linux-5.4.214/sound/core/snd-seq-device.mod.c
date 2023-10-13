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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0xce2f01d5, "device_del" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x5fe1c3f, "device_add" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x367d4168, "bus_for_each_dev" },
	{ 0x8e17faf3, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x95febe11, "snd_seq_root" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x535449e7, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x8847ae0c, "snd_info_create_module_entry" },
	{ 0x3496ec42, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "8D3B536F993BA6D5DDEABD8");
