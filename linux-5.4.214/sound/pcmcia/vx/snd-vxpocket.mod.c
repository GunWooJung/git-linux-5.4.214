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
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xee3deb3e, "snd_vx_load_boot_image" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0xe58c7186, "snd_vx_resume" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf5674251, "snd_vx_free_firmware" },
	{ 0x46597715, "snd_vx_dsp_boot" },
	{ 0x902ce17b, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0xc5850110, "printk" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0x5c7337f, "snd_vx_suspend" },
	{ 0x7230b849, "snd_vx_check_reg_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3ec08508, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x7432be22, "snd_vx_setup_firmware" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0x3d549164, "snd_card_free" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "pcmcia,snd-vx-lib,snd");

MODULE_ALIAS("pcmcia:m01F1c0100f*fn*pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "1A91A7C6B7CBA6E8DFCC506");
