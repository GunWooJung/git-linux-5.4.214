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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66432aba, "serial8250_register_8250_port" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0xcc248d26, "serial8250_suspend_port" },
	{ 0xc7208c3a, "serial8250_resume_port" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x2371be34, "platform_device_add_properties" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xf12c14e7, "serial8250_get_port" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xef951673, "serial8250_do_shutdown" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdff1cffc, "serial8250_do_set_divisor" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000494Fd00001052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000105Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd0000106Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000494Fd000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000300bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000302bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000310bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000311bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000312bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000320bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000321bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000322bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv000012C4sd00000330bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv000012C4sd00000331bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv000012C4sd00000332bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv00001014sd000003D4bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00000358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013A8d00008358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018F7d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6EA22B71FEAC16C57EB84FF");
