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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x3e5704e8, "gnss_put_device" },
	{ 0xe3b7bdee, "gnss_register_device" },
	{ 0xe9bc55af, "serdev_device_close" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5ab9030, "gnss_deregister_device" },
	{ 0xbfbaa570, "gnss_allocate_device" },
	{ 0x29dc21b3, "serdev_device_wait_until_sent" },
	{ 0xbcd1e5ae, "serdev_device_write" },
	{ 0x7580c311, "serdev_device_write_wakeup" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f0018e7, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xfaec895c, "serdev_device_set_flow_control" },
	{ 0x48f6bdcb, "gnss_insert_raw" },
	{ 0xaa66b3f4, "serdev_device_set_baudrate" },
};

MODULE_INFO(depends, "gnss");


MODULE_INFO(srcversion, "370E37E3EB01F15C51FED16");
