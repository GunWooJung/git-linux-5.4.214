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
	{ 0x922dc5b2, "crypto_unregister_template" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0xc5850110, "printk" },
	{ 0xa0fa5e83, "crypto_mod_put" },
	{ 0xf3284af4, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c5722e4, "crypto_init_shash_spawn" },
	{ 0x341f19e6, "crypto_alg_mod_lookup" },
	{ 0x2e923e7d, "crypto_grab_spawn" },
	{ 0xd8dc6c50, "crypto_grab_skcipher" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x299fbb2e, "poly1305_core_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x6150e390, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
	{ 0x5ef1870c, "poly1305_core_emit" },
	{ 0x30dbed6e, "poly1305_core_blocks" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xe9a9cb7f, "crypto_spawn_tfm" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "5ADF7A4D23547F45EDBB4D9");
