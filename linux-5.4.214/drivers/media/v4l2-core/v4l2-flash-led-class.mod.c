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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc42da65d, "v4l2_async_register_subdev" },
	{ 0x77316c24, "led_sysfs_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xa4bbb275, "led_set_flash_brightness" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x79433882, "led_get_flash_fault" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc2f4dd48, "led_set_brightness_sync" },
	{ 0xcee4d161, "fwnode_handle_get" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3530ac2, "v4l2_fh_is_singular" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x98088f3e, "led_set_flash_timeout" },
	{ 0x63937264, "led_update_brightness" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x8386a66a, "led_update_flash_brightness" },
	{ 0x6746e6dd, "v4l2_subdev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9089961, "led_trigger_remove" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x998ce68c, "v4l2_async_unregister_subdev" },
	{ 0xfe267919, "led_sysfs_enable" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "videodev,led-class-flash,mc");


MODULE_INFO(srcversion, "0E980667C5B982B8CA84347");
