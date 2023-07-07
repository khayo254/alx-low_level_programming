# 0x14. C - Bit manipulation

This directory contains C code that demonstrates how to perform bitwise operations and manipulate individual bits in C.

## Learning Objectives

By the end of this project, students should be able to:

- Understand how to use bitwise operators to manipulate binary data
- Understand how to perform bit shifting to move data within a register
- Understand how to use masks to extract or modify specific bits in a register

## Files

The following files are included in this directory:

- `main.h`: Header file containing function prototypes for all functions used in the project.
- `0-binary_to_uint.c`: Function that converts a binary string to an unsigned integer value.
- `1-print_binary.c`: Function that prints the binary representation of an unsigned long integer value.
- `2-get_bit.c`: Function that returns the value of a bit at a given index in an unsigned long integer value.
- `3-set_bit.c`: Function that sets the bit at a given index in an unsigned long integer value to 1.
- `4-clear_bit.c`: Function that sets the bit at a given index in an unsigned long integer value to 0.
- `5-flip_bits.c`: Function that returns the number of bits that need to be flipped to convert one unsigned long integer value to another.
- `100-get_endianness.c`: Function that checks the endianness (byte order) of the system and returns a value indicating whether it is little endian or big endian.

## Compilation and Usage

To compile the code in this directory, run the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o bit_manipulation
```

This will compile all of the `.c` files in the directory and create an executable file called `bit_manipulation`.

To run a specific function, run the `bit_manipulation` executable followed by the name of the function you want to run. For example, to test the `binary_to_uint` function, run the following command:

```
./bit_manipulation 0
```

This will run the `binary_to_uint` function with a binary string of `0`, and print the resulting decimal value to the console.

