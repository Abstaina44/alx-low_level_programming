#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -c -fPIC
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.o -shared -o liball.so
