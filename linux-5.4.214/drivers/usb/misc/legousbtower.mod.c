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
	{ 0x765395c3, "param_ops_int" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x693a12d4, "usb_poison_urb" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xee13453, "usb_find_interface" },
	{ 0xebb33591, "nonseekable_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A6FE42EF68DBD55DB3D75D");
