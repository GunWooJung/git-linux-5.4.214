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
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xbd6e4545, "irq_create_mapping_affinity" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0xbdc16e0e, "irq_domain_simple_ops" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd5067bba, "rt_mutex_lock" },
	{ 0xe27849d, "rt_mutex_trylock" },
	{ 0x72152111, "rt_mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:cht_wcove_ext_chgr");

MODULE_INFO(srcversion, "3A6F096B4C20455787F3BFB");
