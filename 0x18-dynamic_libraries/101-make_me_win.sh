#!/bin/bash
wget -P /tmp https://github.com/eyzee00/alx-low_level_programming/blob/master/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
