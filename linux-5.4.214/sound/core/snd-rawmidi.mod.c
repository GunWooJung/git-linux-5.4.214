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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbefb1a0e, "put_pid" },
	{ 0xc3a7a7d0, "snd_register_device" },
	{ 0x9405488d, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf8edb3af, "snd_card_file_remove" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfa06e85, "pid_vnr" },
	{ 0x6932b09e, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd0b56b3c, "snd_device_initialize" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0xcd5fddbb, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x4a124b0d, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4baaf551, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8bc0870, "compat_put_timespec" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x72f9ab42, "snd_card_file_add" },
	{ 0xb9f01c23, "snd_ctl_register_ioctl" },
	{ 0x8e17faf3, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x874ebf40, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb5f700cc, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbe089fbb, "snd_ctl_get_preferred_subdevice" },
	{ 0x574e16ca, "snd_seq_device_new" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x85918ac3, "snd_ctl_unregister_ioctl_compat" },
	{ 0x3496ec42, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device");


MODULE_INFO(srcversion, "0A87805ACA0D8F8E5AA48E2");
