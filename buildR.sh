#!/bin/bash
rm .version

clear

# Resources
THREAD="-j8"
KERNEL="Image"
DTBIMAGE="dtb"

export CLANG_PATH=${HOME}/toolchains/bin/
export PATH=${CLANG_PATH}:${PATH}
export CROSS_COMPILE=aarch64-linux-gnu- CC=clang CXX=clang++
export CROSS_COMPILE_ARM32=arm-linux-gnueabi-
#export KBUILD_COMPILER_STRING=$(~/android/Toolchains/clang/clang10/bin/clang --version | head -n 1 | perl -pe 's/\(http.*?\)//gs' | sed -e 's/  */ /g' -e 's/[[:space:]]*$//')
export CXXFLAGS="$CXXFLAGS -fPIC"
export DTC_EXT=dtc

DEFCONFIG="raphael_user_defconfig"

# Paths
KERNEL_DIR=`pwd`
ZIMAGE_DIR="${PWD}/out-proton9TP/arch/arm64/boot/"

# Kernel Details
VER=".1.7"

# Vars
BASE_AK_VER="MOD_LELAONN"
AK_VER="$BASE_AK_VER$VER"
export LOCALVERSION=~`echo $AK_VER`
export ARCH=arm64
export SUBARCH=arm64
export KBUILD_BUILD_USER=LelaoNN
export KBUILD_BUILD_HOST=Xubuntu20.04

DATE_START=$(date +"%s")

echo -e "${green}"
echo "-------------------"
echo "Making Kernel:"
echo "-------------------"
echo -e "${restore}"

echo
make CC=clang CXX=clang++ O=out-proton9TP $DEFCONFIG
make CC=clang CXX=clang++ O=out-proton9TP $THREAD 2>&1 | tee kernel.log

echo -e "${green}"
echo "-------------------"
echo "Build Completed in:"
echo "-------------------"
echo -e "${restore}"

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))
echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
echo
cd $ZIMAGE_DIR
ls -a
