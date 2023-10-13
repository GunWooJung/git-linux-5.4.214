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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x7d1d66c6, "input_unregister_handler" },
	{ 0xcf5b83fd, "input_register_handler" },
	{ 0x19c0b2e1, "input_open_device" },
	{ 0x6932b09e, "stream_open" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x75e6f694, "input_match_device_id" },
	{ 0xc5850110, "printk" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0xa2dc9732, "input_register_handle" },
	{ 0x535449e7, "device_initialize" },
	{ 0x48f94262, "input_class" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x88b37d53, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0x6c5bc42e, "input_close_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xde793eab, "kill_fasync" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x754d539c, "strlen" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e17faf3, "put_device" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "D7B592A92C41DFFE51928D5");
