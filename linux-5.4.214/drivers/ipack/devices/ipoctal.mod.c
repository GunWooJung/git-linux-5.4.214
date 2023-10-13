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
	{ 0x42e11aa, "ipack_driver_unregister" },
	{ 0x1437c169, "ipack_driver_register" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x374eae6e, "__tty_insert_flip_char" },
	{ 0xf10de535, "ioread8" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf8b7d7aa, "tty_port_register_device_attr" },
	{ 0xe47ee5a3, "tty_port_alloc_xmit_buf" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0xe5dcda24, "tty_port_destroy" },
	{ 0x947de707, "tty_port_free_xmit_buf" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipack");

MODULE_ALIAS("ipack:f01v000000F0d00000022*");
MODULE_ALIAS("ipack:f01v000000F0d0000002A*");
MODULE_ALIAS("ipack:f01v000000F0d00000048*");

MODULE_INFO(srcversion, "8A17D8EC5DCAE5282042429");
