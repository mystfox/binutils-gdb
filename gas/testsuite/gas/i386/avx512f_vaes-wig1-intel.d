#as: -mevexwig=1
#objdump: -dw -Mintel
#name: i386 AVX512F/VAES wig insns (Intel disassembly)
#source: avx512f_vaes-wig.s

.*: +file format .*


Disassembly of section \.text:

00000000 <_start>:
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de f4[ 	]*vaesdec zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de b4 f4 c0 1d fe ff[ 	]*vaesdec zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de b2 c0 1f 00 00[ 	]*vaesdec zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df f4[ 	]*vaesdeclast zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df b4 f4 c0 1d fe ff[ 	]*vaesdeclast zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df b2 c0 1f 00 00[ 	]*vaesdeclast zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc f4[ 	]*vaesenc zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc b4 f4 c0 1d fe ff[ 	]*vaesenc zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc b2 c0 1f 00 00[ 	]*vaesenc zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd f4[ 	]*vaesenclast zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd b4 f4 c0 1d fe ff[ 	]*vaesenclast zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd b2 c0 1f 00 00[ 	]*vaesenclast zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de f4[ 	]*vaesdec zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de b4 f4 c0 1d fe ff[ 	]*vaesdec zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 de b2 c0 1f 00 00[ 	]*vaesdec zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df f4[ 	]*vaesdeclast zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df b4 f4 c0 1d fe ff[ 	]*vaesdeclast zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 df b2 c0 1f 00 00[ 	]*vaesdeclast zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc f4[ 	]*vaesenc zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc b4 f4 c0 1d fe ff[ 	]*vaesenc zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dc b2 c0 1f 00 00[ 	]*vaesenc zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd f4[ 	]*vaesenclast zmm6,zmm5,zmm4
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd b4 f4 c0 1d fe ff[ 	]*vaesenclast zmm6,zmm5,ZMMWORD PTR \[esp\+esi\*8-0x1e240\]
[ 	]*[a-f0-9]+:[ 	]*62 f2 d5 48 dd b2 c0 1f 00 00[ 	]*vaesenclast zmm6,zmm5,ZMMWORD PTR \[edx\+0x1fc0\]
#pass
