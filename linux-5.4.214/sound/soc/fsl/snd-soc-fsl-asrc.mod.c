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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa274e396, "snd_soc_set_runtime_hwparams" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc3d84a5, "__devm_regmap_init_mmio_clk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf0a93916, "dma_request_slave_channel" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x6688fb3f, "snd_dmaengine_pcm_prepare_slave_config" },
	{ 0x6fe44dcc, "snd_soc_dpcm_get_substream" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc085b495, "snd_soc_rtdcom_lookup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cfsl,imx35-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx35-asrcC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrc");
MODULE_ALIAS("of:N*T*Cfsl,imx53-asrcC*");

MODULE_INFO(srcversion, "0386034075B230435C7CAE8");
