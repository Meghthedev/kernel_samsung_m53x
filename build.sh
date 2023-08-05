#!/bin/bash

if [ ! -d "$(pwd)/toolchain/clang" ]; then
  git clone https://github.com/afaneh-toolchain/prebuilts_clang_host_linux-x86_clang-r383902.git $(pwd)/toolchain/clang --depth=1
else
  echo "Repository already exists. Skipping clone."
fi

if [ ! -d "$(pwd)/toolchain/gcc" ]; then
  git clone https://github.com/LineageOS/android_prebuilts_gcc_linux-x86_aarch64_aarch64-linux-android-4.9 $(pwd)/toolchain/gcc --depth=1
else
  echo "Repository already exists. Skipping clone."
fi

export CLANG_PATH=$(pwd)/toolchain/clang
export PATH=${CLANG_PATH}:${PATH}
export CROSS_COMPILE=$(pwd)/toolchain/gcc/bin/aarch64-linux-android-
export KERNEL_LLVM_BIN=$(pwd)/toolchain/clang/bin/clang
export LD_LIBRARY_PATH=$(pwd)/toolchain/clang/lib64:$LD_LIBRARY_PATH
export CLANG_TRIPLE=aarch64-linux-gnu-
export KCFLAGS=-w
export CONFIG_SECTION_MISMATCH_WARN_ONLY=y
export ANDROID_MAJOR_VERSION=r
export PLATFORM_VERSION=13

make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y LLVM=1 LLVM_IAS=1 m53x_defconfig
make -C $(pwd) O=$(pwd)/out KCFLAGS=-w CONFIG_SECTION_MISMATCH_WARN_ONLY=y LLVM=1 LLVM_IAS=1 -j16

cp out/arch/arm64/boot/Image $(pwd)/arch/arm64/boot/Image