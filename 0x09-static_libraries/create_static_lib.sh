#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
