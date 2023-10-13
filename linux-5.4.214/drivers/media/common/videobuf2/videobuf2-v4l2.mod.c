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
	{ 0x76231f6a, "vb2_core_streamoff" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8e3be29e, "vb2_core_dqbuf" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf0d8e9ab, "vb2_mmap" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x40bfc67b, "vb2_core_qbuf" },
	{ 0x5a93f25d, "vb2_core_querybuf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe152a901, "vb2_core_streamon" },
	{ 0x7284b23b, "vb2_core_poll" },
	{ 0x7d00ca52, "vb2_read" },
	{ 0x847e5b42, "vb2_core_prepare_buf" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc978beb8, "v4l2_event_pending" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacaf737c, "v4l2_fh_release" },
	{ 0x94d6cc5e, "media_request_put" },
	{ 0x641ec0f2, "vb2_core_queue_release" },
	{ 0x76160a31, "vb2_request_buffer_cnt" },
	{ 0xd8a33a, "vb2_write" },
	{ 0xa751659, "media_request_get_by_fd" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5cde1a19, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x368fe8f, "vb2_core_create_bufs" },
	{ 0x7497af89, "vb2_core_expbuf" },
	{ 0xed237e0c, "vb2_core_reqbufs" },
	{ 0x9996bcc0, "vb2_verify_memory_type" },
	{ 0xa65f6945, "vb2_core_queue_init" },
	{ 0x788f3b9d, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "6F55CEED13FD6AAE293F89C");
