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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x44fc39b6, "pn533_recv_frame" },
	{ 0xb3d5c96d, "pn533_finalize_setup" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x7e4224c8, "pn533_unregister_device" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x3e366cf4, "pn533_register_device" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("i2c:pn533_i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2cC*");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2cC*");

MODULE_INFO(srcversion, "C85399C30382F91047D7F35");
