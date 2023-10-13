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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0xa6626805, "uart_resume_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x94625ee8, "uart_suspend_port" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0x318a8467, "dma_direct_sync_sg_for_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb1fcb4ff, "uart_update_timeout" },
	{ 0xb3a8c206, "uart_get_baud_rate" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7a0d56a, "uart_write_wakeup" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,vf610-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,vf610-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,ls1028a-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,ls1028a-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-lpuartC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,imx8qxp-lpuartC*");

MODULE_INFO(srcversion, "7036A38C01636E35DC46F8B");
