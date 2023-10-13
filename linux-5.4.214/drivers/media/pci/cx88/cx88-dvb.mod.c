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
	{ 0x947be5cd, "param_ops_short" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xa8b3f34f, "vb2_ops_wait_finish" },
	{ 0x5d87f715, "vb2_ops_wait_prepare" },
	{ 0x7bb0516b, "cx8802_unregister_driver" },
	{ 0x70009c08, "cx8802_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5724791, "vb2_dvb_register_bus" },
	{ 0x6141c8c5, "cx88_tuner_callback" },
	{ 0x6391ad79, "vb2_queue_init" },
	{ 0x6d097ff4, "vb2_dma_sg_memops" },
	{ 0xb2fe6b9b, "vb2_dvb_dealloc_frontends" },
	{ 0x64fe54f3, "vb2_dvb_alloc_frontend" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6882fa36, "vp3054_i2c_probe" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x71776d1c, "cx88_setup_xc3028" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c61a5f3, "cx8802_get_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2493b136, "vb2_dvb_find_frontend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xa32839cd, "cx8802_buf_prepare" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xfc39ad03, "cx8802_start_dma" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3d2d8b8b, "cx8802_cancel_buffers" },
	{ 0x57ba13b8, "cx8802_buf_queue" },
	{ 0xf3359706, "vb2_dvb_get_frontend" },
	{ 0xbf106248, "vp3054_i2c_remove" },
	{ 0x244c8a94, "vb2_dvb_unregister_bus" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-v4l2,cx8802,videobuf2-dvb,cx88xx,videobuf2-dma-sg,cx88-vp3054-i2c,dvb-core,videobuf2-common");


MODULE_INFO(srcversion, "4FF03413187F0F9A65F2505");
