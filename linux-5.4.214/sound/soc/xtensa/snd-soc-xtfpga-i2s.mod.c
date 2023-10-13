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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa274e396, "snd_soc_set_runtime_hwparams" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc3d84a5, "__devm_regmap_init_mmio_clk" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "1FDA5B6A945BF44EC37D379");
