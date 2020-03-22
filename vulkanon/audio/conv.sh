#!/bin/sh

for f in *.wav *.aif; do
    name=$(basename $(basename $f .wav) .aif)
    rawfile=${name}.raw
    sox $f -r 16384 -c 1 -b -s $rawfile
    arm-elf-objcopy --rename-section .data=.rodata -I binary -O elf32-littlearm -B ARM $rawfile ${name}.o
done
