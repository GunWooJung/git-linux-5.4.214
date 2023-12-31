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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xf6c0161e, "ipmi_smi_watcher_unregister" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa9ab7627, "ipmi_smi_watcher_register" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x5328374d, "__class_create" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x12dd1e77, "ipmi_set_maintenance_mode" },
	{ 0x3bc993e, "ipmi_set_my_LUN" },
	{ 0x50f65edf, "ipmi_set_gets_events" },
	{ 0xd54a5050, "ipmi_unregister_for_cmd" },
	{ 0xec1c2a90, "ipmi_get_my_address" },
	{ 0x705dd14, "ipmi_register_for_cmd" },
	{ 0xfe0f2369, "ipmi_get_maintenance_mode" },
	{ 0xfaaa4831, "ipmi_set_my_address" },
	{ 0x74778a80, "ipmi_get_my_LUN" },
	{ 0x804f922a, "ipmi_addr_length" },
	{ 0x4c2054d7, "ipmi_request_settime" },
	{ 0xe4f4665b, "ipmi_validate_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xae71627d, "ipmi_create_user" },
	{ 0x80aa4656, "ipmi_free_recv_msg" },
	{ 0xf388b18b, "ipmi_destroy_user" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xc5850110, "printk" },
	{ 0xd267dbfb, "device_create" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");


MODULE_INFO(srcversion, "19BFDAB7188CE6C2448450B");
