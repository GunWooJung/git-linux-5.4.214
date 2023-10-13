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
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x9d801813, "stm_source_write" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x6b7fcc4d, "stm_source_register_device" },
	{ 0x647cf122, "stm_source_unregister_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
};

MODULE_INFO(depends, "stm_core");


MODULE_INFO(srcversion, "04C3D5F97038023536D5010");
