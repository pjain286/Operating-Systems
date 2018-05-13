#Simple Kernel Module

A kernel module is a .C file but cannot be directly compiled using gcc compilers.A makefile has to be written for compilation.

Type the following commands on the shell :

$ make
$ sudo insmod simple_module.ko
$ dmesg
$ sudo rmmod simple_module
$ dmesg

$make clean

Note : If you receive any error "Required Key Not Avialable", it is due to UEFI systems with enabled Secure Boot.This can be resolved by disabling secure boot in UEFI(BIOS) settings.
