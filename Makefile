#   make linux   -> build/linux/libsystem.so  (native gcc)
#   make win32   -> build/win32/system.dll    (MSVC x86 on the Windows host, via WSL)
ROOT   := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
CC     ?= gcc
CFLAGS := -std=c11 -Wall -Wextra -Werror -O2 -fPIC \
          -fwrapv -fno-strict-aliasing -ffp-contract=off -I$(ROOT)/include

SYSTEM_SRC := $(wildcard $(ROOT)/src/dalibs/system/*.c)

.PHONY: all linux win32 clean-linux
all: linux win32

linux: $(ROOT)/build/linux/libsystem.so

# DACOM_Acquire and FDUMP stay undefined until DACOM itself is ported.
$(ROOT)/build/linux/libsystem.so: $(SYSTEM_SRC) $(wildcard $(ROOT)/include/*.h)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(SYSTEM_SRC)

win32:
	sh $(ROOT)/tools/win32/build_system_dll.sh

clean-linux:
	rm -rf $(ROOT)/build/linux
