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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0xcd330f4, "range_unknown" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0x3b954a0d, "ni_tio_cmdtest" },
	{ 0x89add806, "ni_tio_insn_config" },
	{ 0x1d351d76, "ni_tio_insn_write" },
	{ 0xdf1d3a54, "ni_tio_insn_read" },
	{ 0xda23d366, "ni_tio_init_counter" },
	{ 0x5e08a876, "ni_gpct_device_construct" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0x95526793, "mite_alloc_ring" },
	{ 0xe92c6aae, "mite_attach" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x96de0371, "comedi_buf_write_alloc" },
	{ 0xc5d947d7, "mite_release_channel" },
	{ 0x19e7bd8b, "ni_tio_cancel" },
	{ 0x40117902, "ni_tio_cmd" },
	{ 0x43d46fc8, "ni_tio_acknowledge" },
	{ 0x91b5c3f6, "ni_tio_set_mite_channel" },
	{ 0xec59af71, "mite_request_channel" },
	{ 0x921123e, "ni_lookup_route_register" },
	{ 0x68122a0b, "ni_tio_set_routing" },
	{ 0xed7f4adb, "ni_tio_unset_routing" },
	{ 0x5177c401, "comedi_bytes_per_scan_cmd" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xbed89eef, "comedi_is_subdevice_running" },
	{ 0x8c9dab1f, "ni_tio_handle_interrupt" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xcc649136, "mite_ack_linkc" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x35ae1ca1, "mite_dma_arm" },
	{ 0x11bf1b95, "mite_prep_dma" },
	{ 0x9044625a, "comedi_buf_read_alloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1d7e9eb, "ni_tio_get_routing" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8b43e486, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x8e22b8ff, "mite_detach" },
	{ 0xfe9c9e11, "mite_free_ring" },
	{ 0x3222ce8a, "ni_gpct_device_destroy" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0xa420e14e, "mite_init_ring_descriptors" },
	{ 0xfc5d3f3f, "comedi_bytes_per_scan" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x9671ae48, "mite_bytes_in_transit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9a78588a, "mite_sync_dma" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x6f186aa7, "mite_buf_change" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pci,comedi_8255,ni_tiocmd,ni_tio,ni_routing,mite");

MODULE_ALIAS("pci:v00001093d00000162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001580sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000710Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "377B18B68D01AFA379AA30D");
