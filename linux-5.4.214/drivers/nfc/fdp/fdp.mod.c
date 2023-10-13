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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc52f6b9e, "nci_req_complete" },
	{ 0x65472bab, "nci_core_conn_close" },
	{ 0x6f5aa457, "nci_recv_frame" },
	{ 0x44c8ab69, "nci_send_data" },
	{ 0x9eff83, "nci_core_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa8cc8d0e, "nci_unregister_device" },
	{ 0x74a2b665, "nci_core_conn_create" },
	{ 0xe579ff5f, "nci_prop_cmd" },
	{ 0x1dbcc31c, "nci_core_reset" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8098fa37, "nci_core_cmd" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x69acdf38, "memcpy" },
	{ 0x80500894, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x28f18d0, "nci_register_device" },
	{ 0xc5b4a17f, "nci_get_conn_info_by_dest_type_params" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfc41cf36, "nci_allocate_device" },
	{ 0x8798274e, "nci_free_device" },
	{ 0xcecc8c62, "nci_conn_max_data_pkt_payload_size" },
};

MODULE_INFO(depends, "nci");


MODULE_INFO(srcversion, "36AD642CFD1CEF46DFB07F4");
