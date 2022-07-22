#!/bin/bash
gll -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
