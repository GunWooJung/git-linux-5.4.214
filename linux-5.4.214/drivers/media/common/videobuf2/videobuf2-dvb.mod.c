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
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x931f18d9, "vb2_thread_start" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0x1f590010, "vb2_thread_stop" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0x720da46f, "vb2_plane_vaddr" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,videobuf2-common");


MODULE_INFO(srcversion, "C2B610DF7F0C1421310AD47");
