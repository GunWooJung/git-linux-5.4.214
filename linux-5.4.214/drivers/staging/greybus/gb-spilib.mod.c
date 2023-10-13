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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x30779a9, "spi_register_controller" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x14b80dd0, "spi_new_device" },
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0x3c375ccc, "gb_operation_sync_timeout" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe7c8c0fc, "gb_operation_request_send_sync_timeout" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x11001db2, "spi_finalize_current_message" },
	{ 0x22683675, "gb_operation_get_payload_size_max" },
	{ 0x70117f57, "gb_operation_put" },
	{ 0x5c8c319a, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "34A339A7752132587534941");
