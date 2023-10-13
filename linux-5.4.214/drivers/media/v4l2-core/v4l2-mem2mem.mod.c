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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x30740d7d, "media_device_unregister_entity" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf0d8e9ab, "vb2_mmap" },
	{ 0xfd03b243, "media_devnode_create" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x77e8ed40, "vb2_create_bufs" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xef543b6, "vb2_request_object_is_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x573b5ca9, "media_remove_intf_links" },
	{ 0x4964b1f0, "vb2_prepare_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x8543afad, "media_entity_pads_init" },
	{ 0xc978beb8, "v4l2_event_pending" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48077d6e, "vb2_qbuf" },
	{ 0x1dc2a32c, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x34cc83c4, "media_device_register_entity" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb2ec09bb, "vb2_streamon" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fb983a5, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x22914a7d, "media_create_pad_link" },
	{ 0x2cbb4cc, "vb2_reqbufs" },
	{ 0xf85c44da, "media_entity_remove_links" },
	{ 0x5075529, "media_create_intf_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xf04fb927, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4b49fa2, "vb2_queue_release" },
	{ 0x7116fb3a, "vb2_streamoff" },
	{ 0x4ffdc176, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,videobuf2-common,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "EF8BC48F090A33D304A4213");
