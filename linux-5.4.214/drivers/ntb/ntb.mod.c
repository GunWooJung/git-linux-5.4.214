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
	{ 0xdc274b8f, "bus_register" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89eba28e, "irq_to_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x8b1b1560, "devres_alloc_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa619e2b0, "devres_add" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x8e6213f, "devres_destroy" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x39d07ab1, "devm_iounmap" },
	{ 0x29361773, "complete" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF79A9156E2FECBA25EECDA");
