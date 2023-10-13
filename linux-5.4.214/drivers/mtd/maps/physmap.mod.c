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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5ba8f35a, "simple_map_init" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x88095edc, "devm_gpiod_get_array_optional" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcfe5c5b1, "map_destroy" },
	{ 0xb0259c6, "do_map_probe" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xffa12a7b, "mtd_concat_destroy" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0x25b0753e, "mtd_concat_create" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "map_funcs,chipreg,mtd");


MODULE_INFO(srcversion, "C71D088BE0579289D90978A");
