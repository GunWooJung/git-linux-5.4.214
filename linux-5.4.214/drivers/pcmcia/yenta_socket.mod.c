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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0x2cee9b6a, "pcmcia_register_socket" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2c058868, "pci_setup_cardbus" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe0a388bf, "pcibios_resource_to_bus" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xc34614e0, "pccard_nonstatic_ops" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2a79eade, "pci_claim_resource" },
	{ 0x9ac59436, "pcibios_bus_to_resource" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9eab43ac, "pcmcia_parse_events" },
	{ 0x360b1afe, "probe_irq_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcca5ec56, "pcmcia_unregister_socket" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0xb8b093c8, "pci_bus_resource_n" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xc5e74216, "release_resource" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v0000104Cd0000AC13sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC12sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC15sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC17sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC19sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Csv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC51sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC1Bsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC52sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC56sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC55sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC54sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC41sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008011sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC42sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC44sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC46sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC16sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC50sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008031sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008036sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd00008039sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Esv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Dsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC49sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC47sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v0000104Cd0000AC48sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001411sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001412sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001421sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001422sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001211sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001225sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001410sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001524d00001420sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000465sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000466sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000475sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000476sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001180d00000478sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Asv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d0000060Fsv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001179d00000617sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v00001217d*sv*sd*bc06sc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc06sc07i00*");

MODULE_INFO(srcversion, "23C5D5A2AD2BC39D9F3E8D3");
