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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x94a09154, "input_register_device" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x321dadd0, "hid_hw_open" },
	{ 0xef0b66a5, "hid_hw_close" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x66c54ff1, "input_event" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000020D6p0000CB17");

MODULE_INFO(srcversion, "C9857DB11A796A54EA90D4F");