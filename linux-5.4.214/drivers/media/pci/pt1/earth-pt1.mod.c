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
	{ 0x60b5afd5, "dvb_module_probe" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xe5b94725, "dvb_frontend_reinitialise" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7f6f442, "dvb_module_release" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xd03eaf4c, "schedule_hrtimeout_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("pci:v000010EEd0000211Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000222Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1250B09383124A794F04AED");
