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
	{ 0x3c0375e4, "dst_error_recovery" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaa4937b2, "rdc_reset_state" },
	{ 0xe45be87e, "dst_wait_dst_ready" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaeb78fdd, "dvb_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x67e394e4, "dst_error_bailout" },
	{ 0x43a983fd, "dst_check_sum" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xc75c2d9e, "read_dst" },
	{ 0x5465d1b7, "dst_comm_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x85f13916, "dst_pio_disable" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x54198376, "write_dst" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x13c49cc2, "_copy_from_user" },
};

MODULE_INFO(depends, "dst,dvb-core");


MODULE_INFO(srcversion, "0541CBBD4B33C784609C1C4");
