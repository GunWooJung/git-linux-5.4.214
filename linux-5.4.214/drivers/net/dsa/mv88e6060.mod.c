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
	{ 0xd25948c6, "mdio_driver_unregister" },
	{ 0x21ec145d, "mdio_driver_register" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x70c02408, "mdiobus_read_nested" },
	{ 0x4407d962, "mdiobus_write_nested" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "1C73BBC056F6CA81523FAFD");
