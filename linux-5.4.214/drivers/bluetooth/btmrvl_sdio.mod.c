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
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa06387f2, "btmrvl_register_hdev" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xcb9f6930, "btmrvl_add_card" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x80500894, "request_firmware" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd900c32d, "btmrvl_check_evtpkt" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0x702ddc8, "btmrvl_process_event" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xb5b57c73, "btmrvl_send_module_cfg_cmd" },
	{ 0xbbdc73a8, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8d26f6e4, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0x5c20f43, "hci_resume_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2bfce97, "dev_coredumpv" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x62bf23b8, "btmrvl_enable_hs" },
	{ 0x1844dee5, "hci_suspend_dev" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "65A0DDC0CEEF578B8FA3D9C");
