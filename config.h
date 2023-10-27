#pragma once

// String used to delimit block outputs in the status.
#define DELIMITER "︱"

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 1

// Define blocks for the status feed as X(cmd, interval, signal).
#define BLOCKS(X)                                                           \
    X("~/.config/scripts/mpd 2>/dev/null|head -n1",0,8)                 \
    X("~/.config/scripts/iface 2>/dev/null|head -n1",13,17)            \
    X("~/.config/scripts/bandwidth 2>/dev/null|head -n1",5,18)        \
    X("~/.config/scripts/load_average 2>/dev/null|head -n1 ",11,20)    \
    X("~/.config/scripts/temperature.i3 2>/dev/null|head -n1 ",3,21)    \
    X("~/.config/scripts/cpu 2>/dev/null",5,24)                    \
    X("~/.config/scripts/battery 2>/dev/null|head -n1 ",31,10)        \
    X("~/.config/scripts/udiskie 2>/dev/null|head -n1 ",5,25)          \
    X("~/.config/scripts/volume-pulseaudio 2>/dev/null|head -n1 ", 0,12)\
    X("~/.config/scripts/i3weather 2>/dev/null|head -n1",100,22)    \
    X("~/.config/scripts/clock 2>/dev/null|head -n1",10, 23)            \
    X("~/.config/scripts/bluetooth.i3 2>/dev/null|head -n1 ",0, 5)
