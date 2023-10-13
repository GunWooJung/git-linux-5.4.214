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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xc2448345, "default_llseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xa0d7a8f6, "usb_debug_root" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0xc5850110, "printk" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x1d8b98ff, "usb_add_hcd" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x41187327, "clk_get" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x3a43808f, "usb_create_hcd" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d3002b1, "usb_hcd_link_urb_to_ep" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5bf4ef75, "usb_hcd_resume_root_hub" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb22b81f, "usb_hc_died" },
	{ 0x543eed24, "usb_hcd_poll_rh_status" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd1da9080, "usb_hcd_check_unlink_urb" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c8e8bfd, "usb_hcd_giveback_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdc7c1, "usb_hcd_unlink_urb_from_ep" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6527a231, "dbgp_external_startup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdf1882af, "dbgp_reset_prep" },
	{ 0x5748356e, "device_create_file" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xce807a25, "up_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x57bc19d2, "down_write" },
	{ 0xbc9b8588, "ehci_cf_port_reset_rwsem" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x754d539c, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x741cf2fc, "usb_hub_clear_tt_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa9107ac8, "usb_put_hcd" },
	{ 0xf28ad204, "usb_remove_hcd" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D2109EA5C94649F7D6376BF");
