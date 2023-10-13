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
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x19c2c9a9, "mmc_hw_reset" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0xc5850110, "printk" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x93583205, "sdio_f0_writeb" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "5148108111D1D7B9EE5F3C2");
