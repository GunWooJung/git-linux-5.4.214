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
	{ 0xc2a957c9, "ath6kl_core_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x206c3b59, "ath6kl_hif_intr_bh_handler" },
	{ 0xa0949db6, "ath6kl_core_cleanup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c975e8c, "ath6kl_core_create" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x710af66b, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a6dfa27, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4c166988, "mmc_set_data_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x31fbc388, "ath6kl_cfg80211_suspend" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc940c4a3, "ath6kl_cfg80211_resume" },
	{ 0x46e9c46d, "ath6kl_stop_txrx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0b9034, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");

MODULE_INFO(srcversion, "4A648DD1E9DF959B13410DC");
