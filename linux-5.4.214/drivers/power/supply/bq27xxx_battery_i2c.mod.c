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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x647aca1f, "bq27xxx_battery_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa0a15dc7, "bq27xxx_battery_teardown" },
	{ 0xfbbfaeaf, "bq27xxx_battery_update" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bq27xxx_battery");

MODULE_ALIAS("i2c:bq27200");
MODULE_ALIAS("i2c:bq27210");
MODULE_ALIAS("i2c:bq27500");
MODULE_ALIAS("i2c:bq27510");
MODULE_ALIAS("i2c:bq27520");
MODULE_ALIAS("i2c:bq27500-1");
MODULE_ALIAS("i2c:bq27510g1");
MODULE_ALIAS("i2c:bq27510g2");
MODULE_ALIAS("i2c:bq27510g3");
MODULE_ALIAS("i2c:bq27520g1");
MODULE_ALIAS("i2c:bq27520g2");
MODULE_ALIAS("i2c:bq27520g3");
MODULE_ALIAS("i2c:bq27520g4");
MODULE_ALIAS("i2c:bq27521");
MODULE_ALIAS("i2c:bq27530");
MODULE_ALIAS("i2c:bq27531");
MODULE_ALIAS("i2c:bq27541");
MODULE_ALIAS("i2c:bq27542");
MODULE_ALIAS("i2c:bq27546");
MODULE_ALIAS("i2c:bq27742");
MODULE_ALIAS("i2c:bq27545");
MODULE_ALIAS("i2c:bq27411");
MODULE_ALIAS("i2c:bq27421");
MODULE_ALIAS("i2c:bq27425");
MODULE_ALIAS("i2c:bq27426");
MODULE_ALIAS("i2c:bq27441");
MODULE_ALIAS("i2c:bq27621");

MODULE_INFO(srcversion, "F99A4FBE3A124615D3FBB07");
