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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA36753D3BC37A8421C3DC1");
