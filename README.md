# Hello From the Kernel

This is a simple Hello World program, but with one twist - **the program doesn't use any standard libraries**.
> No `#include <iostream>` at all!

## Build

### Linux x64
```bash
g++ -o main_linux_x64 main_linux_x64.cpp
```
### Mac x64
```bash
g++ -o main_mac_x64 main_mac_x64.cpp
```
### Mac arm64
```bash
g++ -o main_mac_arm64 main_mac_arm64.cpp
```
### Windows x64 (through WSL or MinGW)
```bash
g++ -o main_win_x64 main_win_x64.cpp
```

## Run

### Linux x64
```bash
./main_linux_x64
```
### Mac x64
```bash
./main_mac_x64
```
### Mac arm64
```bash
./main_mac_arm64
```
### Windows x64
```bash
./main_win_x64
```

## Notes
- This program is a simple example of how to write a Hello World program for different architectures without using any standard library functions.
