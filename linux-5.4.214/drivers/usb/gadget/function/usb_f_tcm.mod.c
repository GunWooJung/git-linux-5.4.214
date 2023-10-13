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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56797163, "usb_ep_autoconfig_ss" },
	{ 0x2108e3e0, "usb_gstrings_attach" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0xc41263c7, "usb_ep_disable" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x44cb8431, "configfs_undepend_item" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xda1fc8e1, "target_submit_cmd" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x9371479e, "unregister_gadget_item" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x3906f88e, "target_remove_session" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x705b04bd, "usb_composite_setup_continue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xf1d63e74, "target_setup_session" },
	{ 0xa916b694, "strnlen" },
	{ 0x86ee7057, "transport_send_check_condition_and_sense" },
	{ 0x2ce544af, "target_unregister_template" },
	{ 0x2706669f, "transport_init_se_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb96a72e, "configfs_depend_item_unlocked" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "libcomposite,udc-core,target_core_mod");


MODULE_INFO(srcversion, "FF3BB1CD4415837352DECC8");
