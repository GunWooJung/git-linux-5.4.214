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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d28a5bd, "component_unbind_all" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe49f77bb, "component_bind_all" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x62addeb6, "component_match_add_release" },
	{ 0x775473fc, "component_master_del" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2f58b160, "v4l2_device_unregister_subdev" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x15b8e28e, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xcc8b5292, "v4l2_device_register_subdev" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6746e6dd, "v4l2_subdev_init" },
	{ 0xea5f4b29, "__media_device_register" },
	{ 0x8e4ec12d, "media_entity_remote_pad" },
	{ 0x732288e6, "v4l2_device_register_subdev_nodes" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x3b771659, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x62ea139f, "media_device_init" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x21bb6ef4, "media_device_unregister" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "1201E530A742D2A15A5913D");
