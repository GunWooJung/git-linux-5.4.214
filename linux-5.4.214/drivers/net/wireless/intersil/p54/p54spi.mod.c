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
	{ 0x765395c3, "param_ops_int" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x23ff4bea, "p54_free_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5cf5d35, "p54_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37b5ff04, "p54_register_common" },
	{ 0x9d16ffba, "p54_parse_eeprom" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa25df39c, "request_firmware_direct" },
	{ 0x30faccb7, "p54_parse_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x14683188, "p54_init_common" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x520c7ff4, "p54_free_common" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7640d350, "p54_unregister_common" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common,mac80211");


MODULE_INFO(srcversion, "F04895D6725BA2BCEFC3D51");
