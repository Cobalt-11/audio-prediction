KERNELDIR := ../buildroot/output/build/linux-5.15
PWD := $(shell pwd)

obj-m += hello.o

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) ARCH=arm CROSS_COMPILE=../buildroot/output/host/bin/arm-buildroot-linux-gnueabihf- modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean ARCH=arm CROSS_COMPILE=../buildroot/output/host/bin/arm-buildroot-linux-gnueabihf-
