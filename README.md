# GDB for 64-bit Rust operating systems

## Installation
First install the build dependencies:

```
apt-get install texinfo flex bison python-dev ncurses-dev
```

Then download and build the fixed GDB for `x86_64-pc-linux-gnu`:

```
curl -sf https://raw.githubusercontent.com/phil-opp/binutils-gdb/rust-os/build-rust-os-gdb.sh | sh
```

It will take a while. After completion, you will have a `rust-os-gdb` subfolder that contains the fixed `gdb` executable and the `rust-gdb` script.
