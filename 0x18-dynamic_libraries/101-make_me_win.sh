#!/bin/bash
wget -p https://github.com/shroukmoustafa/alx-low_level_programming/raw/blob/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
