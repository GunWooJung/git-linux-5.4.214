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
	{ 0x42160169, "flush_workqueue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1d65ff, "crypto_register_kpp" },
	{ 0xec73ed56, "atmel_i2c_probe" },
	{ 0xc5850110, "printk" },
	{ 0xb706c4cb, "crypto_alloc_kpp" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f63882d, "crypto_unregister_kpp" },
	{ 0x1821146d, "crypto_stats_kpp_generate_public_key" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1577b9ca, "atmel_i2c_enqueue" },
	{ 0xa5fa67bc, "crypto_stats_kpp_compute_shared_secret" },
	{ 0xfaab573f, "atmel_i2c_init_ecdh_cmd" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x35038b5c, "atmel_i2c_send_receive" },
	{ 0xc71ed50c, "atmel_i2c_init_genkey_cmd" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x32d5c189, "crypto_stats_kpp_set_secret" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x515ba532, "crypto_ecdh_decode_key" },
	{ 0x7a4497db, "kzfree" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atmel-i2c,ecdh_generic");

MODULE_ALIAS("i2c:atecc508a");

MODULE_INFO(srcversion, "6BF827776408370D17233AA");
