# what flags you want to pass to the C compiler & linker
AM_CFLAGS = --pedantic -Wall -std=c99 -O2 -I./include -I/usr/local/include/ta-lib -DHAVE_CONFIG_H
AM_LDFLAGS = -lta_lib -lpthread -ldl

# this lists the binaries to produce, the (non-PHONY, binary) targets in
# the previous manual Makefile
bin_PROGRAMS = tash
tash_SOURCES = tash.c \
  options.c \
  talib.c