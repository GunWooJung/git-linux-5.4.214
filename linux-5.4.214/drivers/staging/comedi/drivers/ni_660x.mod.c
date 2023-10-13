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
	{ 0x1d7e9eb, "ni_tio_get_routing" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xed7f4adb, "ni_tio_unset_routing" },
	{ 0x68122a0b, "ni_tio_set_routing" },
	{ 0x76bc308, "ni_find_route_source" },
	{ 0xb3e302a3, "ni_route_to_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x40117902, "ni_tio_cmd" },
	{ 0x43d46fc8, "ni_tio_acknowledge" },
	{ 0xec59af71, "mite_request_channel" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8b43e486, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0x8e22b8ff, "mite_detach" },
	{ 0xfe9c9e11, "mite_free_ring" },
	{ 0x3222ce8a, "ni_gpct_device_destroy" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xda23d366, "ni_tio_init_counter" },
	{ 0x3b954a0d, "ni_tio_cmdtest" },
	{ 0x89add806, "ni_tio_insn_config" },
	{ 0x1d351d76, "ni_tio_insn_write" },
	{ 0xdf1d3a54, "ni_tio_insn_read" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x5e08a876, "ni_gpct_device_construct" },
	{ 0xf6399e4e, "ni_assign_device_routes" },
	{ 0x95526793, "mite_alloc_ring" },
	{ 0xe92c6aae, "mite_attach" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x64443d67, "ni_get_valid_routes" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5d947d7, "mite_release_channel" },
	{ 0x91b5c3f6, "ni_tio_set_mite_channel" },
	{ 0x19e7bd8b, "ni_tio_cancel" },
	{ 0x72103f2a, "comedi_buf_read_n_available" },
	{ 0x9a78588a, "mite_sync_dma" },
	{ 0x6f186aa7, "mite_buf_change" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x8c9dab1f, "ni_tio_handle_interrupt" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,ni_tio,ni_routing,ni_tiocmd,mite,comedi");

MODULE_ALIAS("pci:v00001093d00001310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002DB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001E40sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5564FAB9E09CA1CA03246BB");
