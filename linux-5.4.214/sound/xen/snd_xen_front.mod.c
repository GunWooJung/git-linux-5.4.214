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
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x3ea8b5a3, "xenbus_frontend_closed" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x4b931968, "xen_features" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x16f15139, "bind_evtchn_to_irq" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xc7c23ff0, "xenbus_exists" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6e3b5ee, "xenbus_free_evtchn" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xea7b22c7, "xen_front_pgdir_shbuf_unmap" },
	{ 0x7514cd74, "xenbus_unregister_driver" },
	{ 0x9166fada, "strncpy" },
	{ 0xbd2ca76, "xen_front_pgdir_shbuf_alloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x7bf7a9e8, "__xenbus_register_frontend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2fce310, "xenbus_alloc_evtchn" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0x9944644a, "xen_front_pgdir_shbuf_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96ec6791, "xenbus_grant_ring" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x587138e0, "xenbus_switch_state" },
	{ 0xd20a0bf2, "xen_front_pgdir_shbuf_map" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x22e0fb6, "xen_front_pgdir_shbuf_get_dir_start" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x75362760, "xenbus_dev_fatal" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7712771a, "unbind_from_irqhandler" },
};

MODULE_INFO(depends, "snd-pcm,xen-front-pgdir-shbuf,snd");


MODULE_INFO(srcversion, "E4B8D6F6EC24EC118B3E98A");
