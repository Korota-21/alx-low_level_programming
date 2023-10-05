#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a

