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
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8f261499, "usb_add_gadget_udc_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x5dfee392, "dma_pool_create" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "A9789F992BE2BFAF0568E20");
