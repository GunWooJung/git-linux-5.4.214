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
	{ 0x40cc2f4a, "no_seek_end_llseek" },
	{ 0xe60548f0, "__cpuhp_remove_state" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x7c941d6, "__cpuhp_setup_state" },
	{ 0x5328374d, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6a27775, "smp_call_function_single_async" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29361773, "complete" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd267dbfb, "device_create" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94362896973583C3E6E82D1");
