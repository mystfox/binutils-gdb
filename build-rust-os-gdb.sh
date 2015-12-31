#!/bin/sh

# Exit if anything fails
set -e

DIR=$( pwd )

git clone -b rust-os --depth 1 \
  https://github.com/phil-opp/binutils-gdb.git
mkdir build-binutils
cd build-binutils
../binutils-gdb/configure --target=x86_64-pc-linux-gnu --prefix="$DIR/rust-os-gdb" --with-python=yes \
  --enable-tui --with-curses \
  --disable-nls --disable-werror \
  --disable-gas --disable-binutils --disable-ld --disable-gprof
make
make install
cd ..
rm -rf build-binutils
cp binutils-gdb/rust-gdb rust-os-gdb/bin/rust-gdb
chmod +x rust-os-gdb/bin/rust-gdb
rm -rf binutils-gdb
