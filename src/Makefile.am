# this lists the binaries to produce, the (non-PHONY, binary) targets in
# the previous manual Makefile
bin_PROGRAMS = tash
tash_SOURCES = options.c \
  talib.c \
  tash.c

tash_CFLAGS = --pedantic -Wall -std=c99 -O2 -I./include -I/usr/local/include/ta-lib -DHAVE_CONFIG_H -Wl,--rpath -Wl,LIBDIR
tash_LDFLAGS = -lpthread -ldl -static -lta_lib