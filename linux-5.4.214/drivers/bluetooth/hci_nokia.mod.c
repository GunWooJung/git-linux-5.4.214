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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6666592, "__serdev_device_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x950480de, "btbcm_set_bdaddr" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x6e9b2166, "__hci_cmd_sync" },
	{ 0x80500894, "request_firmware" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x898b0136, "hci_uart_tx_wakeup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x223ed151, "serdev_device_get_tiocm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaa66b3f4, "serdev_device_set_baudrate" },
	{ 0x41377ca0, "serdev_device_write_flush" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfaec895c, "serdev_device_set_flow_control" },
	{ 0x463ba09, "serdev_device_set_tiocm" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x29dc21b3, "serdev_device_wait_until_sent" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x815588a6, "clk_enable" },
	{ 0x550e9871, "hci_uart_register_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x29361773, "complete" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcf6beace, "h4_recv_buf" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xd523d85d, "skb_push" },
	{ 0xea0f420b, "hci_uart_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btbcm,bluetooth,hci_uart");


MODULE_INFO(srcversion, "FE973C62BF499791BE2C2A4");
