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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x77358855, "iomem_resource" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x4de77495, "dvb_ca_en50221_camchange_irq" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x4cc83ca3, "dvb_ca_en50221_camready_irq" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0xe55191a1, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x48a93420, "dvb_ca_en50221_release" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a2c35b6, "dvb_ca_en50221_init" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core");


MODULE_INFO(srcversion, "7F9CBF51AADFF5EE93F0D1B");
