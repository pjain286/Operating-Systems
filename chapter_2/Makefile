obj-m = simple_module.o

build_path = /lib/modules/$(shell uname -r)/build M=$(PWD)

all:
	make -C $(build_path) modules
clean:
	make -C $(build_path) clean
