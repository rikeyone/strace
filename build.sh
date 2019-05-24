#!/bin/sh

export CC=aarch64-linux-gnu-gcc
export LD=aarch64-linux-gnu-ld
export AR=aarch64-linux-gnu-ar
export RANLIB=aarch64-linux-gnu-ranlib


cd strace-5.1

INSTALL_DIR=`pwd`/../install
./configure --prefix=${INSTALL_DIR} \
			--host=aarch64-unknown-linux \
			--enable-mpers=check
make
make install
