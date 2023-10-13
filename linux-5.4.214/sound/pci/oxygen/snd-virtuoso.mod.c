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
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x12d908d2, "oxygen_read16" },
	{ 0xd579bf4c, "oxygen_pci_remove" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2688f7a6, "oxygen_write8_masked" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x984c442, "oxygen_write16_masked" },
	{ 0xfc04c214, "oxygen_write_ac97_masked" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xe68806d7, "oxygen_write_spi" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dc5a19, "oxygen_pci_probe" },
	{ 0xf840a0f, "snd_jack_new" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0xf5bb8d2, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xddb9b8ac, "snd_component_add" },
	{ 0x11b01940, "oxygen_read8" },
	{ 0x4a80c8ac, "oxygen_reset_uart" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x6d67434, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x2470531c, "oxygen_write_i2c" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd7358956, "oxygen_pci_pm" },
	{ 0x3ba2741, "oxygen_pci_shutdown" },
	{ 0x2082c756, "snd_jack_report" },
	{ 0xff94b8b9, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "4E966709DD6CE78B2585E1F");
