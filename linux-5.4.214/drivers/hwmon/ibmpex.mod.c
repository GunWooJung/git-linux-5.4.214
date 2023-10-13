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
	{ 0xf6c0161e, "ipmi_smi_watcher_unregister" },
	{ 0xa9ab7627, "ipmi_smi_watcher_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5748356e, "device_create_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "F6827D2027A84561A5FF338");
