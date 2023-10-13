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
	{ 0xeca6138d, "intel_th_driver_unregister" },
	{ 0xcfef95e2, "intel_th_trace_disable" },
	{ 0x1c5c9cda, "intel_th_driver_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41041b8f, "intel_th_trace_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x96848186, "scnprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th");


MODULE_INFO(srcversion, "8E1B7EC16C53EB2AB0C63A6");
