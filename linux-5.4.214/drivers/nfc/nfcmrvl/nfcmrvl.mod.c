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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3c0fb1f5, "nfc_send_to_raw_sock" },
	{ 0xd2a55dbe, "nci_send_cmd" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6f5aa457, "nci_recv_frame" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a404926, "nci_send_frame" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x939ff0f0, "nci_set_config" },
	{ 0xa8cc8d0e, "nci_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xfe990052, "gpio_free" },
	{ 0x3243092d, "nfc_fw_download_done" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x80500894, "request_firmware" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x28f18d0, "nci_register_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfc41cf36, "nci_allocate_device" },
	{ 0x8798274e, "nci_free_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "nfc,nci");


MODULE_INFO(srcversion, "8B2407100C7372226313E3C");
