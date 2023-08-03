#include "main.h"

/**
 * print_binary -  prints the inary representation of an unsigned int
 * @n: The number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);

	for (unsigned long int i = 0; i < size; i++)
	{
		if ((n & mask) == 0)
		{
			putchar('0');
		}
		else
		{
			putchar('1');
		}
		mask >> 1;
	}
}

