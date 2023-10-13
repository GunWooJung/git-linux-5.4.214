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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xfdeb1a62, "register_candev" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x23a77175, "napi_disable" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x334a5ba9, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xba5c46f2, "can_bus_off" },
	{ 0x8acc823e, "close_candev" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf4799c0a, "alloc_candev_mqs" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x32c6e9b0, "free_candev" },
	{ 0xb594bd2f, "pinctrl_pm_select_sleep_state" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7c2b6899, "can_change_mtu" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7be444ed, "unregister_candev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xffcdd8b2, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1ec7ee7, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x44e7928f, "open_candev" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x3795f377, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6008728e, "can_get_echo_skb" },
	{ 0x14cb8c87, "can_put_echo_skb" },
	{ 0x4778268d, "can_free_echo_skb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "F0903836E46BE233B98CB91");
