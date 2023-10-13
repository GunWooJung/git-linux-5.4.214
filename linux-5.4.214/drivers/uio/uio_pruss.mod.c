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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfac56468, "__uio_register_device" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x486075c8, "gen_pool_dma_alloc" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x815588a6, "clk_enable" },
	{ 0x41187327, "clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe4cdef2, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "DEEF50DB8528B63041AD767");
