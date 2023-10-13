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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7e922c28, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9a626fa6, "crypto_engine_alloc_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x26a554a6, "virtio_break_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4975675e, "crypto_engine_start" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x30e6dc72, "crypto_finalize_ablkcipher_request" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3e8deedf, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x824701af, "crypto_transfer_ablkcipher_request_to_engine" },
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad446de8, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xb7fd6004, "crypto_engine_exit" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42651f42, "virtqueue_is_broken" },
	{ 0xd8c6a4dd, "virtqueue_detach_unused_buf" },
	{ 0xf6c7e757, "crypto_unregister_alg" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xba3f45f1, "register_virtio_driver" },
};

MODULE_INFO(depends, "crypto_engine");

MODULE_ALIAS("virtio:d00000014v*");

MODULE_INFO(srcversion, "AA8199DEC57616E25370B76");
