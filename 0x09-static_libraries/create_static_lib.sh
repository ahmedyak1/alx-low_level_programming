#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -C *.C
ar rc liball.a *.O
