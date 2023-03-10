# 0x09. C - Static libraries

## Description
This repository contains programs written in C language for the purpose of learning about static libraries.

## Files
* `libmy.a`: A static library containing various functions.
* `holberton.h`: A header file containing the prototypes of the functions in `libmy.a`.
* `0-create_static_lib.sh`: A shell script that creates a static library called `libmy.a` from all the `.c` files in the current directory.
* `1-create_static_lib.sh`: A shell script that creates a static library called `liball.a` from all the `.c` files in the `./src` directory and its subdirectories.

## Usage
To use the functions in `libmy.a`, include the `holberton.h` header file in your C program and link the `libmy.a` library using the `-L` and `-l` flags:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libmy.a *.o
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o program_name program_name.c -L. -lmy
```

To use the functions in `liball.a`, include the `holberton.h` header file in your C program and link the `liball.a` library using the `-L` and `-l` flags:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c ./src/*.c
ar -rc liball.a *.o
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o program_name program_name.c -L. -lall
```

## Author
This repository is maintained by [khayo254].
