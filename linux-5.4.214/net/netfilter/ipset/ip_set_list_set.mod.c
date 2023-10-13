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
	{ 0xc4ddfb09, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf4adcb9b, "ip_set_type_register" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc0a7a479, "ip_set_put_extensions" },
	{ 0xa916b694, "strnlen" },
	{ 0xe3280eb0, "ip_set_name_byindex" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa8a27aac, "ip_set_get_byname" },
	{ 0x15895842, "ip_set_get_extensions" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcbfd13dc, "ip_set_extensions" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3b9fa2ad, "ip_set_elem_len" },
	{ 0x351ac138, "ip_set_match_extensions" },
	{ 0x278000ee, "ip_set_test" },
	{ 0x2a74f756, "ip_set_add" },
	{ 0xf9ab863e, "ip_set_del" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x48429d8a, "ip_set_put_byindex" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "5E7F503ADBEF0CC72FFBF73");
