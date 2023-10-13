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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xa2d1167f, "snd_rawmidi_transmit_peek" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x16b41dd, "parport_claim" },
	{ 0x1f85bb35, "parport_release" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3b431728, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xaf465642, "platform_device_put" },
};

MODULE_INFO(depends, "snd-rawmidi,parport,snd");


MODULE_INFO(srcversion, "AF90DF7F945D9EAE531986C");
