.if !defined(OSVERSION)
OSVERSION != awk '/^\#define[[:blank:]]__FreeBSD_version/ {print $$3}' < /usr/include/sys/param.h # from bsd.port.mk
.endif

PROJECT = steam-utils

BUILD_DIR ?= .
PREFIX    ?= /opt

CFLAGS = --sysroot=/compat/linux -std=c99 -Wall -Wextra -Wno-unused-parameter

.if $(OSVERSION) > 1300053
CFLAGS += -DSKIP_FUTEX_WORKAROUND
.endif

LIBS  = lib32/steamfix/steamfix.so    \
        lib32/fakenm/libnm-glib.so.4  \
        lib32/fakepulse/libpulse.so.0 \
        lib64/fakepulse/libpulse.so.0 \
        lib64/webfix/webfix.so        \
        lib64/fakeudev/libudev.so.0

BINS  = lxbin/fhelper32 lxbin/fhelper64

LIBS := ${LIBS:C|(.*)|$(BUILD_DIR)/\1|}
BINS := ${BINS:C|(.*)|$(BUILD_DIR)/\1|}

build: $(LIBS) $(BINS)

.for b in 32 64

$(BUILD_DIR)/lib$(b)/steamfix/steamfix.so: src/steamfix.c src/futexes.c
	mkdir -p $(BUILD_DIR)/lib$(b)/steamfix
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -fPIC -shared -o $(.TARGET) src/steamfix.c src/futexes.c -pthread -ldl

$(BUILD_DIR)/lib$(b)/webfix/webfix.so: src/webfix.c src/futexes.c
	mkdir -p $(BUILD_DIR)/lib$(b)/webfix
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -fPIC -shared -o $(.TARGET) src/webfix.c   src/futexes.c -pthread -ldl

$(BUILD_DIR)/lib$(b)/fakenm/libnm-glib.so.4: src/fakenm.c
	mkdir -p $(BUILD_DIR)/lib$(b)/fakenm
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -fPIC -shared -o $(.TARGET) src/fakenm.c

$(BUILD_DIR)/lib$(b)/fakepulse/libpulse.so.0: src/fakepulse.c
	mkdir -p $(BUILD_DIR)/lib$(b)/fakepulse
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -fPIC -shared -o $(.TARGET) src/fakepulse.c

$(BUILD_DIR)/lib$(b)/fakeudev/libudev.so.0: src/fakeudev.c
	mkdir -p $(BUILD_DIR)/lib$(b)/fakeudev
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -fPIC -shared -o $(.TARGET) src/fakeudev.c

$(BUILD_DIR)/lxbin/fhelper$(b): src/futex_helper.c
	mkdir -p $(BUILD_DIR)/lxbin
	/compat/linux/bin/cc -m$(b) $(CFLAGS) -o $(.TARGET) src/futex_helper.c

.endfor

clean:
.for f in $(LIBS) $(BINS)
.  if exists($f)
	rm $f
.  endif
.endfor

install:
	install -d $(PREFIX)/$(PROJECT)
	install -d $(PREFIX)/$(PROJECT)/lib32
	install -d $(PREFIX)/$(PROJECT)/lib64
.for d in bin lxbin lib32/steamfix lib32/fakenm lib32/fakepulse lib64/fakepulse lib64/fakeudev lib64/webfix
	install -d $(PREFIX)/$(PROJECT)/$(d)
.  if exists($d)
	install $(d)/* $(PREFIX)/$(PROJECT)/$(d)
.  endif
.  if $(BUILD_DIR) != "."
.    if exists($BUILD_DIR/$d)
	install $(BUILD_DIR)/$(d)/* $(PREFIX)/$(PROJECT)/$(d)
.    endif
.  endif
.endfor

deinstall:
.if exists($(PREFIX)/$(PROJECT))
	rm -r -I $(PREFIX)/$(PROJECT)
.endif

dependencies:
	pkg install -r FreeBSD \
		ca_root_nss \
		lang/ruby26 \
		linux-c7-alsa-lib \
		linux-c7-atk \
		linux-c7-cairo \
		linux-c7-dbus-libs \
		linux-c7-devtools \
		linux-c7-elfutils-libelf \
		linux-c7-elfutils-libs \
		linux-c7-expat \
		linux-c7-fontconfig \
		linux-c7-freetype \
		linux-c7-fribidi \
		linux-c7-gdk-pixbuf2 \
		linux-c7-graphite2 \
		linux-c7-gtk2 \
		linux-c7-harfbuzz \
		linux-c7-libdrm \
		linux-c7-libgcrypt \
		linux-c7-libglvnd \
		linux-c7-libgpg-error \
		linux-c7-libpng \
		linux-c7-libthai \
		linux-c7-lz4 \
		linux-c7-nspr \
		linux-c7-nss \
		linux-c7-openal-soft \
		linux-c7-pango \
		linux-c7-pixman \
		linux-c7-systemd-libs \
		linux-c7-xorg-libs \
		linux_base-c7
	#TODO: Nvidia's legacy drivers
	sysctl -q hw.nvidia.version > /dev/null && pkg install -r FreeBSD linux-nvidia-libs
