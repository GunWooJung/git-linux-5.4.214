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
	{ 0xfb7c64ce, "saa7146_vfree_destroy_pgtable" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7d733a50, "saa7146_vmalloc_build_pgtable" },
	{ 0x739699af, "saa7146_setgpio" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9291fd02, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x3dbd037e, "ttpci_eeprom_parse_mac" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0xc5850110, "printk" },
	{ 0xc2fcc7be, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x416c331f, "saa7146_i2c_adapter_prepare" },
	{ 0x3d538b4f, "saa7146_wait_for_debi_done" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "saa7146,dvb-core,ttpci-eeprom");


MODULE_INFO(srcversion, "800DE98062DC742ECE14A37");
