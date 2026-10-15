#   make linux   -> build/linux/libdacom.so, libsystem.so, libreadfile.so  (native gcc)
#   make test    -> dacom + readfile tests (readfile: every 10th UTF archive in
#                   game/DATA, diffed against tests/utf_oracle.py)
#   make decomp  -> regenerate decomp/ for every module (slow)
#   make win32   -> build/win32/system.dll    (MSVC x86 on the Windows host, via WSL)
ROOT   := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
CC     ?= gcc
CFLAGS := -std=c11 -Wall -Wextra -Werror -O2 -fPIC \
          -fwrapv -fno-strict-aliasing -ffp-contract=off -I$(ROOT)/include
OUT    := $(ROOT)/build/linux

PLATFORM_SRC := $(wildcard $(ROOT)/src/platform/*.c) $(ROOT)/src/compat/msvc_compat.c
DACOM_SRC    := $(wildcard $(ROOT)/src/dalibs/dacom/*.c)
SYSTEM_SRC   := $(wildcard $(ROOT)/src/dalibs/system/*.c)
READFILE_SRC := $(wildcard $(ROOT)/src/dalibs/readfile/*.c)
HEADERS      := $(wildcard $(ROOT)/include/*.h $(ROOT)/src/dalibs/*/*.h $(ROOT)/src/platform/*.h)

.PHONY: all linux test win32 decomp clean-linux
all: linux win32

linux: $(OUT)/libdacom.so $(OUT)/libsystem.so $(OUT)/libreadfile.so

# libdacom.so carries the platform layer and the CRT compat wrappers for now.
$(OUT)/libdacom.so: $(DACOM_SRC) $(PLATFORM_SRC) $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(DACOM_SRC) $(PLATFORM_SRC) -ldl

$(OUT)/libsystem.so: $(SYSTEM_SRC) $(OUT)/libdacom.so $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(SYSTEM_SRC) -L$(OUT) -ldacom -Wl,-rpath,'$$ORIGIN'

$(OUT)/libreadfile.so: $(READFILE_SRC) $(OUT)/libdacom.so $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -shared -o $@ $(READFILE_SRC) -L$(OUT) -ldacom -Wl,-rpath,'$$ORIGIN'

$(OUT)/test_dacom: $(ROOT)/tests/test_dacom.c $(OUT)/libdacom.so $(OUT)/libsystem.so
	$(CC) $(CFLAGS) -fsanitize=address,undefined -o $@ $< \
	    $(DACOM_SRC) $(PLATFORM_SRC) -ldl -rdynamic

# Sanitizer build of the library under test (loaded by DACOM AddLibrary).
$(OUT)/asan/libreadfile.so: $(READFILE_SRC) $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -fsanitize=address,undefined -shared -o $@ $(READFILE_SRC)

$(OUT)/test_readfile: $(ROOT)/tests/test_readfile.c $(OUT)/libdacom.so $(OUT)/asan/libreadfile.so
	$(CC) $(CFLAGS) -fsanitize=address,undefined -o $@ $< \
	    $(DACOM_SRC) $(PLATFORM_SRC) -ldl -rdynamic

test: $(OUT)/test_dacom $(OUT)/test_readfile
	$(OUT)/test_dacom $(ROOT)/game/EXE $(OUT)
	sh $(ROOT)/tests/utf_list.sh $(ROOT)/game/DATA > $(OUT)/utf_list.txt
	$(OUT)/test_readfile $(ROOT)/game $(OUT)/asan $(OUT)/utf_list.txt $(OUT)/utf_port.txt
	python3 $(ROOT)/tests/utf_oracle.py $(ROOT)/game/DATA $(OUT)/utf_list.txt > $(OUT)/utf_oracle.txt
	cmp $(OUT)/utf_oracle.txt $(OUT)/utf_port.txt && echo "utf walk: identical to oracle"

win32:
	sh $(ROOT)/tools/win32/build_system_dll.sh

# Regenerate decomp/ for every module (slow; meta only: tools/decomp/meta_all.sh).
decomp:
	FORCE=1 sh $(ROOT)/tools/decomp/decomp_all.sh

clean-linux:
	rm -rf $(OUT)
