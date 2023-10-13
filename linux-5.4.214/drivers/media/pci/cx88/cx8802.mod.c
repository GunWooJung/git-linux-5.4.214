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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xed23dc5a, "cx88_risc_databuffer" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x6e76d1b8, "cx88_sram_channel_setup" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x1bb12e6b, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xdc9e610b, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf183e35c, "vb2_plane_cookie" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x93300f11, "cx88_core_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7618cec2, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x7185b63b, "cx88_core_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7ec3cd2, "cx88_shutdown" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x109d52f, "cx88_wakeup" },
	{ 0x415f01fc, "cx88_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "cx88xx,videobuf2-common");

MODULE_ALIAS("pci:v000014F1d00008802sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B14C5EC6FAE13FA37A68642");
