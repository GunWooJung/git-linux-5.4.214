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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xcc649136, "mite_ack_linkc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9a78588a, "mite_sync_dma" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8b43e486, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x8e22b8ff, "mite_detach" },
	{ 0xfe9c9e11, "mite_free_ring" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc75c79af, "comedi_load_firmware" },
	{ 0x95526793, "mite_alloc_ring" },
	{ 0xe92c6aae, "mite_attach" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1000e51, "schedule" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x35ae1ca1, "mite_dma_arm" },
	{ 0x11bf1b95, "mite_prep_dma" },
	{ 0x96de0371, "comedi_buf_write_alloc" },
	{ 0x21c014f4, "mite_request_channel_in_range" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5d947d7, "mite_release_channel" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfb578fc5, "memset" },
	{ 0x6f186aa7, "mite_buf_change" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,mite");

MODULE_ALIAS("pci:v00001093d00001150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000012B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001320sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B17F356F97CE92424238DB0");
