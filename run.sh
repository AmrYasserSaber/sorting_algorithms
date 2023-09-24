#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic  -std=gnu89  $1 $2 print_array.c
./a.out
