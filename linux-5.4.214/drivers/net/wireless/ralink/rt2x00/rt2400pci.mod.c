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
	{ 0x1e7734c8, "rt2x00mac_tx_frames_pending" },
	{ 0x964986f1, "rt2x00mac_get_ringparam" },
	{ 0x733e30ed, "rt2x00mac_get_antenna" },
	{ 0xf3ad68fc, "rt2x00mac_set_antenna" },
	{ 0x6aba24fb, "rt2x00mac_flush" },
	{ 0x9dad6b22, "rt2x00mac_rfkill_poll" },
	{ 0xc74fa762, "rt2x00mac_get_stats" },
	{ 0x308ca0f6, "rt2x00mac_sw_scan_complete" },
	{ 0x57a396d3, "rt2x00mac_sw_scan_start" },
	{ 0xa02e506d, "rt2x00mac_configure_filter" },
	{ 0x8988dd91, "rt2x00mac_bss_info_changed" },
	{ 0x93fd86f7, "rt2x00mac_config" },
	{ 0xd3a4533f, "rt2x00mac_remove_interface" },
	{ 0x3b1d761f, "rt2x00mac_add_interface" },
	{ 0x9c516176, "rt2x00mac_stop" },
	{ 0x1522efba, "rt2x00mac_start" },
	{ 0xb66f22f3, "rt2x00mac_tx" },
	{ 0xae8dc4b5, "rt2x00mmio_flush_queue" },
	{ 0x9ea74802, "rt2x00mmio_uninitialize" },
	{ 0x83ee291b, "rt2x00mmio_initialize" },
	{ 0xb014b7b9, "rt2x00pci_resume" },
	{ 0x35f05156, "rt2x00pci_suspend" },
	{ 0x7af810ba, "rt2x00pci_remove" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x83cbcc1f, "rt2x00lib_beacondone" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9524509, "rt2x00mmio_rxdone" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcdc3768f, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x777a9f0, "rt2x00queue_get_entry" },
	{ 0x42b3f40d, "rt2x00lib_txdone" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92abe524, "rt2x00queue_map_txskb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xe23c7ed9, "rt2x00mac_conf_tx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x79eeda74, "rt2x00mmio_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a6e3b10, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "372683F72F04551B3DB6DD3");
