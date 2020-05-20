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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001E24d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00000101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00000214sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00000215sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d0000021Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00000475sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d0000047Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E24d00009024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007024sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "53858622BDDCFC6E7EF51BD");
