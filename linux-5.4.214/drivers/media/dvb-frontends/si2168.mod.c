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
	{ 0xaed06536, "_dev_warn" },
	{ 0x37e68967, "i2c_mux_add_adapter" },
	{ 0x79b1c1fa, "i2c_mux_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x80500894, "request_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b98a5bc, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "5D564406F00A6C6C1B136D6");
