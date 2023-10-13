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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc2fc233b, "nand_cleanup" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x5566c033, "nand_scan_with_ids" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x51c9265d, "nand_get_set_features_notsupp" },
	{ 0xe9fe18b0, "init_rs_non_canonical" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x938980e4, "nand_wait_ready" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd633e59d, "nand_prog_page_end_op" },
	{ 0x3a404bc0, "nand_prog_page_begin_op" },
	{ 0x82aeaf12, "nand_prog_page_op" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc5850110, "printk" },
	{ 0x51410142, "decode_rs16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa4d6b0a6, "nand_read_page_op" },
	{ 0xc023706f, "nand_read_oob_op" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x3ae5364c, "nand_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,mtd,reed_solomon");

MODULE_ALIAS("pci:v000011ABd00004100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5640A95B99FF23C39C6FF86");
