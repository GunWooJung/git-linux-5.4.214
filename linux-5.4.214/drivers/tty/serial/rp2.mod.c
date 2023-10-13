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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x41d40b, "uart_insert_char" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x6c798fbc, "uart_add_one_port" },
	{ 0x80500894, "request_firmware" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x9424ca0a, "pcim_iomap_regions_request_all" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2458934f, "uart_get_divisor" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011FEd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000004Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000072sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D8EE8603BACE521D487E002");
