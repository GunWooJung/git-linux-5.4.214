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
	{ 0x2d3385d3, "system_wq" },
	{ 0xb0b98488, "flexcop_eeprom_check_mac_addr" },
	{ 0x900635bb, "flexcop_i2c_request" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x66202ce1, "flexcop_pass_dmx_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe2e277fa, "flexcop_device_initialize" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x566b627d, "flexcop_device_kfree" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x8c03784, "flexcop_pid_feed_control" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x91a16357, "flexcop_device_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x874cb15d, "flexcop_sram_set_dest" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa8124485, "flexcop_pass_dmx_packets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x875c1039, "flexcop_device_exit" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("pci:v000013D0d00002103sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1F3A05063FF280BC3409CD");
