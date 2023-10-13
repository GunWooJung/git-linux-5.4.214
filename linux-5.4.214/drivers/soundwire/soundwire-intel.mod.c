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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x538e879a, "sdw_master_read_prop" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2fae4ac, "sdw_delete_bus_master" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3af14226, "sdw_cdns_probe" },
	{ 0x49738e13, "device_get_named_child_node" },
	{ 0x717c7524, "sdw_stream_add_master" },
	{ 0x39eae45e, "snd_soc_register_component" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3670a6, "sdw_add_bus_master" },
	{ 0xa76a6fcb, "sdw_cdns_thread" },
	{ 0xa326e97a, "cdns_xfer_msg" },
	{ 0x640772c7, "cdns_xfer_msg_defer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x888011b4, "sdw_cdns_exit_reset" },
	{ 0x92571372, "snd_soc_unregister_component" },
	{ 0xf0620f0b, "sdw_stream_remove_master" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x7d827d08, "cdns_set_sdw_stream" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x57d992b3, "cdns_bus_conf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6cab532a, "sdw_cdns_get_stream" },
	{ 0x6b1814e2, "sdw_cdns_config_stream" },
	{ 0x8a98e29d, "sdw_cdns_alloc_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xef82892c, "sdw_cdns_enable_interrupt" },
	{ 0x2c590ac7, "sdw_cdns_debugfs_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb1a32ecf, "sdw_cdns_init" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x975d1c2, "cdns_reset_page_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa1d393a6, "sdw_cdns_pdi_init" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-bus,soundwire-cadence,snd-soc-core");


MODULE_INFO(srcversion, "5F14C0D355B52815E4AEC2C");
