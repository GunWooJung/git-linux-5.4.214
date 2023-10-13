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
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x17977d22, "crypto_register_template" },
	{ 0x3bb879b2, "padata_start" },
	{ 0x38fdd2ea, "padata_stop" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0xc4dc934e, "kernel_kobj" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x526cbe5f, "crypto_spawn_tfm2" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8f19597f, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1a1c8731, "crypto_grab_aead" },
	{ 0x5923f631, "padata_alloc_shell" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xa7893988, "padata_free" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x3535aecb, "padata_alloc_possible" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fa5e62a, "padata_free_shell" },
	{ 0x50c581f1, "crypto_drop_spawn" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0xf3642cdc, "padata_do_parallel" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0x39ace319, "padata_do_serial" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD77DCFF426EBE9D8DA3BD8");
