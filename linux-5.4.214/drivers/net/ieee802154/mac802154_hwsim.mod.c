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
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x721c9d1f, "init_net" },
	{ 0x342b6ffb, "genl_notify" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0x4356de1b, "__pskb_copy_fclone" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");


MODULE_INFO(srcversion, "A2181837446B7C7EDE97EE1");
