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
	{ 0xa24f23d8, "__request_module" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe21f5ff5, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0xde9df99b, "v4l2_ctrl_log_status" },
	{ 0xc1e9ccb, "video_device_release" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6bdc59e, "__video_register_device" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x77d54422, "video_device_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x1c15ee81, "v4l2_fh_init" },
	{ 0x443b047d, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x72d05352, "v4l2_fh_add" },
	{ 0x52a65b4a, "v4l2_fh_del" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x92d40b1d, "video_ioctl2" },
	{ 0xbb6b99bc, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
	{ 0x41c8d6e1, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "videodev,dvb-core,tveeprom");

MODULE_ALIAS("pci:v00001131d00007164sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "67E2C0966E23896EACA7084");
