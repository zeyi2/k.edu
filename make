#!/bin/bash

guix shell clang-toolchain@13 -- \
clang-13 $o -oa ?.c -funsigned-char -fno-{builtin,unwind-tables} -w -s -nostdlib -mavx512{f,dq,vbmi,vnni,vpopcntdq} -Ofast
