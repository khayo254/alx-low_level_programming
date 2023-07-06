#include "main.h"

/**
 * clear_bit - Function that sets the bit of a given index to 0
 * @n: pointer to the number
 * @index: index of the bit to be set starting from 0
 *
 * Return: 1 if successful, -1 if an error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
