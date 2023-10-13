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
	{ 0x174e203e, "device_remove_file" },
	{ 0xb0e336c8, "usb_function_deactivate" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56797163, "usb_ep_autoconfig_ss" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0xb087e664, "video_device_release_empty" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x94014d48, "v4l2_event_queue" },
	{ 0xf0d8e9ab, "vb2_mmap" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb3051965, "config_item_put" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40f79de7, "usb_ep_set_halt" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd981d6d9, "usb_function_activate" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xc3604547, "vb2_vmalloc_memops" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd73702e3, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48077d6e, "vb2_qbuf" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xe3a53f4c, "sort" },
	{ 0x1dc2a32c, "vb2_querybuf" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x705b04bd, "usb_composite_setup_continue" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2ec09bb, "vb2_streamon" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x2cbb4cc, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf04fb927, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x71822954, "vb2_poll" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x427c4c79, "config_group_find_item" },
	{ 0x7116fb3a, "vb2_streamoff" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
	{ 0x6391ad79, "vb2_queue_init" },
};

MODULE_INFO(depends, "libcomposite,videodev,udc-core,videobuf2-common,videobuf2-v4l2,videobuf2-vmalloc");


MODULE_INFO(srcversion, "1163A70F744E77B4901682C");
