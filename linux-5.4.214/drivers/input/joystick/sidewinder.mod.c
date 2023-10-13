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
	{ 0x17521301, "gameport_unregister_driver" },
	{ 0x8c1ca098, "__gameport_register_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xad8bc1b8, "gameport_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c54ff1, "input_event" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc5850110, "printk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1cfebdc8, "gameport_start_polling" },
	{ 0xd45ded3, "gameport_stop_polling" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x5efa3366, "gameport_close" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "A7D6D86D0F867DB36A69A60");
