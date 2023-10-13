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
	{ 0xbed38b42, "saa7146_unregister_extension" },
	{ 0xbb8093f3, "saa7146_register_extension" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xd0f6faa1, "saa7146_unregister_device" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x9abc6f9, "saa7146_set_hps_source_and_sync" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb97c21bd, "saa7146_register_device" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0xc8fb1c7f, "v4l2_i2c_new_subdev" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x416c331f, "saa7146_i2c_adapter_prepare" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a05c758, "saa7146_vv_release" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xb2e18b60, "saa7146_vv_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf174db01, "v4l2_subdev_call_wrappers" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7146,saa7146_vv,videodev");

MODULE_ALIAS("pci:v00001131d00007146sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "83BDB5133959C962235DA17");
