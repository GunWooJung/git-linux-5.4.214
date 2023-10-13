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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x29361773, "complete" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctimeriomem_rng");
MODULE_ALIAS("of:N*T*Ctimeriomem_rngC*");

MODULE_INFO(srcversion, "9E5A38066BA96353538F6CF");
