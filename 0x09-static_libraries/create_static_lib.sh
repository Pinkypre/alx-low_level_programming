#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.0
ranlib liball.a
